// Reverse a string using Stack

#include <iostream>
#include <stack>
using namespace std;

int main()
{
   string str = "nikhil";

   stack<char> s;
   for (int i = 0; i < str.length(); i++)
   {
      char ch = str[i];
      s.push(ch);
   }
   string ans = "";
   while (!s.empty())
   {
      char ch = s.top();
      ans.push_back(ch);
      s.pop();
   }

   cout << "Reversed String is : " << ans << endl;
   return 0;
}

// Time Complexity = O(n);
// Space Complexity;