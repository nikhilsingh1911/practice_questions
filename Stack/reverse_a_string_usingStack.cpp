// Reverse a string using Stack
#include <iostream>
#include <stack>
using namespace std;

int main()
{
   string s = "Hello Nikhil Learning DSA?";
   stack<char> st;
   for (int i = 0; i < s.length(); i++)
   {
      char ch = s[i];
      st.push(ch);
   }
   string ans = "";
   while (!st.empty())
   {
      ans += st.top();
      st.pop();
   }
   cout << "The string after reversing is: " << endl;
   cout << ans << endl;
}