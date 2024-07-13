// Swap two number using bit manipulation

#include <iostream>
using namespace std;

int main()
{
   int n = 34, m = 12;
   cout << "Before Swap" << endl;
   cout << "n is " << n << " m is " << m << endl;
   n = n ^ m;
   m = m ^ n;
   n = n ^ m;
   cout << "After Swap" << endl;
   cout << "n is " << n << " m is " << m << endl;
}