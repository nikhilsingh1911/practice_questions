// Check wether the string is balanced or not

#include <iostream>
#include <stack>
using namespace std;

bool isvalid(string s)
{
   stack<char> st;
   for (int i = 0; i < s.length(); i++)
   {
      char ch = s[i];
      if (ch == '(' || ch == '[' || ch == '{')
      {
         st.push(ch);
      }
      else
      {
         if (!st.empty())
         {
            char top = st.top();
            if (ch == ')' && top == '(' || ch == ']' && top == '[' ||
                ch == '}' && top == '{')
            {
               st.pop();
            }
            else
            {
               return false;
            }
         }
         else
         {
            return false;
         }
      }
   }
   if (st.empty())
   {
      return true;
   }
   return false;
}

int main()
{
   string s = "(({}[]))";
   if (isvalid(s))
   {
      cout << "The string is Balanced" << endl;
   }
   else
   {
      cout << "The string is not balanced" << endl;
   }
}