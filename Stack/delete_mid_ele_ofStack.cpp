// In this question we will solve the middle element of the stack
#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

void solveMidEle(stack<int> &st, int cnt, int size)
{
   if (cnt == size / 2)
   {
      st.pop();
      return;
   }
   int num = st.top();
   st.pop();
   solveMidEle(st, cnt + 1, size);
   st.push(num);
}

void deleteMiddleEle(stack<int> &st, int size)
{
   int cnt = 0;
   solveMidEle(st, cnt, size);
}

int main()
{
   stack<int> st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
   deleteMiddleEle(st, 5);
   cout << "Stack after deleting the middle element" << endl;
   while (!st.empty())
   {
      cout << st.top() << endl;
      st.pop();
   }
   return 0;
}