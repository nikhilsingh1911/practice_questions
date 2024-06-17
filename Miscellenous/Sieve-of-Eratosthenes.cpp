// Sieve of eratosthenes
// this is a algorithm to find the prime number less then the given number
// find the prime number less than let say here 25.
// [ [ 2, T ], [ 3, T ], [ 4, T ], [ 5, T ], [ 6, T ], [ 7, T ], [ 8, T ], [ 9, T ], [ 10, T ], [ 11, T ], [ 12, T ], [ 13, T ], [ 14, T ], [ 15, T ], [ 16, T ], [ 17, T ], [ 18, T ], [ 19, T ], [ 20, T ], [ 21, T ], [ 22, T ], [ 23, T ], [ 24, T ], [ 25, T ] ]

// So now according to this theorem
// 1.     2 = 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22.......
// 2.     3 = 3, 6, 9, 12, 15, 18, 21, 24, 27, 30.....
// 3.     5 = 5, 10, 15, 20, 25, 30, 35, 40......
// all those number which are divisble by 2, 3, 5 are marked false and all those number which are true are prime numbers.

//  [[ 2, T ], [ 3, T ], [ 4, F ], [ 5, T ], [ 6, F ], [ 7, T ], [ 8, F ], [ 9, F ], [ 10, F ], [ 11, T ], [ 12, F ], [ 13, T ], [ 14, F ], [ 15, F ], [ 16, F ], [ 17, T ], [ 18, F ], [ 19, T ], [ 20, F ], [ 21, F ], [ 22, F ], [ 23, F ], [ 24, F ], [ 25, F ]]

// all those number which are true are prime numbers
//

#include <iostream>
#include <vector>
using namespace std;

// void isPrime(int n)
// {
//    vector<bool> Prime(n + 1, true);
//    for (int i = 2; i * i <= n; i++)
//    {
//       if (Prime[i])
//       {
//          for (int j = 2 * i; j <= n; j = j + i)
//          {
//             Prime[j] = false;
//          }
//       }
//    }
//    for (int i = 2; i <= n; i++)
//    {
//       if (Prime[i])
//       {
//          cout << i << " ";
//       }
//    }
// }

vector<int> isPrime(int n)
{
   vector<bool> Prime(n + 1, true);
   vector<int> res;
   for (int i = 2; i * i <= n; i++)
   {
      if (Prime[i])
      {
         for (int j = 2 * i; j <= n; j = j + i)
         {
            Prime[j] = false;
         }
      }
   }
   for (int i = 2; i <= n; i++)
   {
      if (Prime[i])
      {
         res.push_back(i);
      }
   }
   return res;
}

vector<int> getPrimes(int n)
{
   // code here
   vector<int> res = isPrime(n);
   for (int i = 0; i < res.size() - 1; i++)
   {
      for (int j = i; j < res.size(); j++)
      {
         cout << i << j << endl;
         cout << res[i] << res[j] << endl;
         if (res[i] + res[j] == n)
         {
            return {res[i], res[j]};
         }
      }
   }
   return {-1, -1};
}
int main()
{
   int number;
   cout << "Enter the number :" << endl;
   cin >> number;
   vector<int> res = getPrimes(number);
   for (int i = 0; i < 2; i++)
   {
      cout << res[i];
   }
}
