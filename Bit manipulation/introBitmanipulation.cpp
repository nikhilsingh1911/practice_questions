#include <iostream>
#include <algorithm>
using namespace std;

string toBinary(int n)
{
   string ans = "";
   while (n)
   {
      int m = n % 2;
      ans += to_string(m);
      n = n / 2;
   }
   reverse(ans.begin(), ans.end());
   return ans;
}

int toDecimal(string s)
{
   int sum = 0;
   int p = 1;
   for (int i = s.length() - 1; i >= 0; i--)
   {
      if (s[i] == '1')
      {
         sum += p;
      }
      p = p * 2;
   }
   return sum;
}

int main()
{
   int n = 11;
   // cout << "Enter the number :" << endl;
   // cin >> n;

   string bin = toBinary(n);
   cout << "The binary number of the " << n << " is : " << bin << endl;

   int number = toDecimal(bin);
   cout << "The binary number " << bin << " is convert into decimal is : " << number << endl;

   // AND Operator (&)
   //  all true -> true
   //  anyone of them is false - > false

   // a   b   = a & b
   // 1   1   =   1
   // 0   1   =   0
   // 1   0   =   0
   // 0   0   =   0
   int a = 13, b = 7;
   cout << "AND Operator of a " << a << " and b " << b << "is " << (a & b) << endl;
   // OR Operator (|)
   //  all false -> false
   //  anyone of them is true - > true

   // a   b   = a | b
   // 1   1   =   1
   // 0   1   =   1
   // 1   0   =   1
   // 0   0   =   0
   int c = 13, d = 7;
   cout << "AND Operator of c " << c << " and d " << d << " is " << (c | d) << endl;
   // XOR Operator (^)
   //  no. of 1's is odd -> 1
   //  no. of 1's even -> 0

   // a   b   = a ^ b
   // 1   1   =   0
   // 0   1   =   1
   // 1   0   =   1
   // 0   0   =   0
   int e = 13, f = 7;
   cout << "AND Operator of e " << e << " and f " << f << " is " << (e ^ f) << endl;
   // SHIFT Operator (RIght shift - >>)
   // 13 >> 1 means 1101 >> 1 will equal to 0110
   // 13 >> 2 means 1101 >> 2 will eqaul to 0011

   int g = 13;

   cout << (g >> 1) << endl;
   cout << (g >> 2) << endl;

   // SHIFT Operator ( Left shift - << )

   // 13 << 1 means 1101 << 1 will equal to 11010
   // 13 << 2 means 1101 << 2 will equal to 110100
   cout << (g << 1) << endl;
   cout << (g << 2) << endl;

   // NOT Operator(~)
   // converts 1 into 0 and 0 into 1..
   int j = -3;
   cout << ~j << endl;
}