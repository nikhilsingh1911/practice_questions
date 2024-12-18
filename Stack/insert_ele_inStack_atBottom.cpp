// Insert a element the bottom of the stack;

#include <iostream>
#include <stack>
using namespace std;

void insertFun(stack<int> &st, int x)
{

   if (st.empty())
   {
      st.push(x);
      return;
   }
   int num = st.top();
   st.pop();
   insertFun(st, x);
   st.push(num);
}

stack<int> insertAtBottom(stack<int> st, int x)
{
   insertFun(st, x);
   return st;
}

int main()
{
   stack<int> st;
   st.push(5);
   st.push(6);
   st.push(7);
   st.push(8);
   stack<int> stt = insertAtBottom(st, 4);
   while (!stt.empty())
   {
      cout << stt.top() << endl;
      stt.pop();
   }
}