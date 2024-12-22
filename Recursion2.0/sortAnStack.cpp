// Sort an stack using recusion
// Sort an array using recursion

#include <iostream>
#include <stack>
using namespace std;

void insertStk(stack<int> &v, int val)
{
   if (v.size() == 0 || v.top() <= val)
   {
      v.push(val);
      return;
   }
   int n = v.top();
   v.pop();
   insertStk(v, val);
   v.push(n);
   return;
}

void sortStk(stack<int> &v)
{
   if (v.size() == 1)
   {
      return;
   }
   int val = v.top();
   v.pop();
   sortStk(v);
   insertStk(v, val);
}

int main()
{
   stack<int> v;
   v.push(4);
   v.push(3);
   v.push(9);
   v.push(8);
   v.push(6);
   sortStk(v);
   while (!v.empty())
   {
      cout << v.top() << endl;
      v.pop();
   }
}