// Check if the ith bit is set or not
// means check if the ith bit is 1 or 0

#include <iostream>
using namespace std;

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

   int k = 15;
   int l = 2;

   int j = k | (1 << l);
   cout << j << endl;

   // changing the ith bit

   int v = 13;
   int c = 2;
   int x = ~(1 << c);
   cout << (v & x) << endl;

   // toggle the ith bit

   int q = 13;
   int w = 2;
   int e = q ^ (1 << w);
   cout << e << endl;

   // Remove the last set Bit(rightMost set bit)

   int r = 12;
   int t = r & r - 1;

   cout << t << endl;
}