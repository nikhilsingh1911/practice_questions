#include <iostream>
using namespace std;

int countBits(int n)
{
   int cnt = 0;
   while (n)
   {
      cnt += (n & 1);
      n >> 1;
   }
   return cnt;
}

void removeLastSetBit(int &n)
{
   n = n & (n - 1);
}

int main()
{
   int n = 17;
   int m = 8;

   // how to check if a number is even or odd.
   cout << (n & 1) << endl;
   // given two number and minimum no of bits to convert first number into second number.
   int r = n ^ m;
   // int res = countBits(r);
   cout << r << endl;
   removeLastSetBit(n);
   cout << n << endl;

   // swapping two number using bitmanipulation

   int a = 6;
   int b = 19;
   cout << "Before Swapping" << endl;
   cout << "A is " << a << " B is " << b << endl;
   a = a ^ b;
   b = b ^ a;
   a = a ^ b;
   cout << "After Swapping" << endl;
   cout << "A is " << a << " B is " << b << endl;

   // Extracte ith bit from a binary representation

   int k = 13;
   int ros = k & (1 << 2);
   cout << "ros is: " << ros << endl;
}