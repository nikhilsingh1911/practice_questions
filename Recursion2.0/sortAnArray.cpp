// Sort an array using recursion

#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int> &v, int val)
{
   if (v.size() == 0 || v[v.size() - 1] <= val)
   {
      v.push_back(val);
      return;
   }
   int n = v[v.size() - 1];
   v.pop_back();
   insert(v, val);
   v.push_back(n);
   return;
}

void sort(vector<int> &v)
{
   if (v.size() == 1)
   {
      return;
   }
   int val = v[v.size() - 1];
   v.pop_back();
   sort(v);
   insert(v, val);
}

int main()
{
   vector<int> v;
   v.push_back(4);
   v.push_back(3);
   v.push_back(9);
   v.push_back(8);
   v.push_back(6);
   sort(v);
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << endl;
   }
}