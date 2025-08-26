#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Check if placing val at (r, c) is allowed in the grid
bool isValid(vector<vector<int>> &grid, int r, int c, int val)
{
   for (int i = 0; i < 9; ++i)
      if (grid[r][i] == val || grid[i][c] == val)
         return false;
   int rs = (r / 3) * 3, cs = (c / 3) * 3;
   for (int i = rs; i < rs + 3; ++i)
      for (int j = cs; j < cs + 3; ++j)
         if (grid[i][j] == val)
            return false;
   return true;
}

// Recursive backtracking to find min changes needed (for hinted/empty cells only)
int solve(vector<vector<int>> &grid, vector<pair<int, int>> &hints, vector<int> &hintVals, int idx, int curChanges, int resChanges, int &minChanges)
{
   if (curChanges >= minChanges)
      return minChanges; // Prune bad branches
   if (idx == hints.size())
   {
      minChanges = min(minChanges, curChanges);
      return minChanges;
   }
   int r = hints[idx].first, c = hints[idx].second;
   int orig = grid[r][c];

   for (int v : hintVals)
   {
      if (isValid(grid, r, c, v))
      {
         grid[r][c] = v;
         solve(grid, hints, hintVals, idx + 1, curChanges + (orig != v), resChanges, minChanges);
         grid[r][c] = orig;
      }
   }
   return minChanges;
}

int main()
{
   vector<vector<int>> grid(9, vector<int>(9));
   vector<pair<int, int>> hints; // {row, col} of cells allowed to change
   for (int i = 0; i < 9; ++i)
      for (int j = 0; j < 9; ++j)
      {
         cin >> grid[i][j];
         if (grid[i][j] == 0 || grid[i][j] % 10 == 0) // leading/trailing zero (hinted/empty)
            hints.push_back({i, j});
      }

   int n;
   cin >> n;
   vector<int> hintVals(n);
   for (int i = 0; i < n; ++i)
      cin >> hintVals[i];

   int K;
   cin >> K;
   // Remove zeros from input values if present; just to be safe
   vector<int> actualHintVals;
   for (int v : hintVals)
      if (v != 0)
         actualHintVals.push_back(v);
   if (actualHintVals.empty())
      actualHintVals.push_back(1); // fallback (should not happen)
   hintVals = actualHintVals;

   int minChanges = INT32_MAX;
   solve(grid, hints, hintVals, 0, 0, 0, minChanges);

   if (minChanges <= K)
      cout << "yes" << endl;
   else
      cout << "no" << endl;
   return 0;
}