#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int ans = 0;
   while (n > 0)
   {
      if (n & 1)
      {
         ans++;
      }
      n = n >> 1;
   }
   cout << "The number of bits are " << ans << endl;
}