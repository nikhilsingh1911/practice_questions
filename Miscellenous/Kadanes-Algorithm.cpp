// Kahane's Algorithm

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int kadaneAlgorithm(vector<int> &arr, int n)
{
   int curr = arr[0];
   int res = arr[0];
   for (int i = 1; i < arr.size() - 1; i++)
   {
      curr = max(arr[i], curr + arr[i]);
      res = max(curr, res);
   }
   return res;
}

int main()
{
   vector<int> arr = {-5, 4, 6, -3, 4, -1};

   int res = kadaneAlgorithm(arr, 6);
   cout << "The sum of maximum subarray is " << res << endl;
}