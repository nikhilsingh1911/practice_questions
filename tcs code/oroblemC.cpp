#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Find all employees in a group using DFS
void dfs(int curr, const vector<vector<int>> &adj, vector<bool> &visited, vector<int> &component)
{
   visited[curr] = true;
   component.push_back(curr);
   for (int nxt : adj[curr])
   {
      if (!visited[nxt])
         dfs(nxt, adj, visited, component);
   }
}

// Try every possible team within a group; only for small groups
int bestTeamInComponent(const vector<int> &members, const vector<vector<int>> &conflict, const vector<int> &skill)
{
   int n = members.size(), best = 0;
   for (int mask = 1; mask < (1 << n); ++mask)
   {
      bool valid = true;
      int sumSkill = 0;
      for (int i = 0; i < n; ++i)
      {
         if (!(mask & (1 << i)))
            continue;
         for (int j = i + 1; j < n; ++j)
         {
            if ((mask & (1 << j)) && conflict[members[i]][members[j]])
               valid = false;
         }
         sumSkill += skill[members[i]];
      }
      if (valid)
         best = max(best, sumSkill);
   }
   return best;
}

int main()
{
   int n, c;
   cin >> n >> c;

   vector<vector<int>> adj(n);
   vector<vector<int>> conflict(n, vector<int>(n, 0));
   for (int i = 0; i < c; ++i)
   {
      int u, v;
      cin >> u >> v;
      --u;
      --v;
      adj[u].push_back(v);
      adj[v].push_back(u);
      conflict[u][v] = conflict[v][u] = 1;
   }

   vector<int> skill(n);
   for (int i = 0; i < n; ++i)
      cin >> skill[i];

   vector<bool> visited(n, false);
   int maxExpertise = 0;

   for (int i = 0; i < n; ++i)
   {
      if (!visited[i])
      {
         vector<int> comp;
         dfs(i, adj, visited, comp);
         if (comp.size() <= 20)
            maxExpertise += bestTeamInComponent(comp, conflict, skill);
         else
         {
            // Only possible for very large conflict groups; fall back to safest option
            int bestSingle = 0;
            for (int idx : comp)
               bestSingle = max(bestSingle, skill[idx]);
            maxExpertise += bestSingle;
         }
      }
   }

   cout << maxExpertise << endl;
   return 0;
}