// Check if the ith bit is set or not
// means check if the ith bit is 1 or 0

#include <iostream>
using namespace std;

int countSetBits(int n)
{
   int cnt = 0;
   while (n > 1)
   {
      if (n % 2 == 1)
      {
         cnt++;
      }
      n = n / 2;
   }
   if (n == 1)
   {
      cnt++;
   }
   return cnt;
}

int main()
{
   int n = 13;
   int i = 2;
   //    1  1  0  1
   // after right shift
   //    0  1  0  1
   // now and these two
   //    0  1  0  1
   // here i is 2 and 2nd bit is set hence the output is 1.
   bool m = n & (1 << i);
   cout << m << endl;

   // setting the ith bit
   cout << "Setting the ith bit" << endl;
   int k = 15;
   int l = 2;

   int j = k | (1 << l);
   cout << j << endl;

   // changing the ith bit
   cout << "Changing the ith bit" << endl;
   int v = 13;
   int c = 2;
   int x = ~(1 << c);
   cout << (v & x) << endl;

   // toggle the ith bit
   cout << "Toggling the ith bit" << endl;
   int q = 13;
   int w = 2;
   int e = q ^ (1 << w);
   cout << e << endl;

   // Remove the last set Bit(rightMost set bit)
   cout << "Changing the last bit" << endl;
   int r = 13;
   int t = r & r - 1;

   cout << t << endl;

   // checking if the number is the power of 2
   cout << "Check if the number is power of 2" << endl;
   int s = 32;
   if (s & s - 1 == 0)
   {
      cout << "Odd" << endl;
   }
   else
   {
      cout << "Even" << endl;
   }

   // counting the number of set bits
   cout << "Counting the number of set bits " << endl;
   int ret = countSetBits(s);

   cout << "the number of bits in the number " << s << " are " << ret << endl;
}