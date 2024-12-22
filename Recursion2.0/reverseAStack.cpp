// Reverse A stack using recursion

#include <iostream>
#include <stack>
using namespace std;

void insertAtBtm(stack<int> &s, int x)
{
   if (s.empty())
   {
      s.push(x);
   }
   else
   {
      int temp = s.top();
      s.pop();
      insertAtBtm(s, x);
      s.push(temp);
   }
}

void reverseStk(stack<int> &s)
{
   if (s.empty())
   {
      return;
   }
   int x = s.top();
   s.pop();
   reverseStk(s);
   insertAtBtm(s, x);
   // s.push(x);
}

int main()
{
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);

   reverseStk(s);
   while (!s.empty())
   {
      cout << s.top() << endl;
      s.pop();
   }
}