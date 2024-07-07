#include <iostream>
using namespace std;

int findHcf(int n, int m)
{
   while (n > 0 && m > 0)
   {
      if (n > m)
      {
         n = n % m;
      }
      else
      {
         m = m % n;
      }
   }
   if (n == 0)
   {
      return m;
   }
   else
   {
      return n;
   }
}

int main()
{
   int n, m;
   cout << "enter the first number" << endl;
   cin >> n;
   cout << "enter the second number" << endl;
   cin >> m;

   int res = findHcf(n, m);
   cout << "The Highest Common facter is : " << res;
}