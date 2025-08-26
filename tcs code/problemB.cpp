#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int findMatch(const string &X, const string &base, int pos)
{
   int maxlen = min(base.size(), X.size() - pos);
   for (int len = maxlen; len >= 1; --len)
   {
      if (base.find(X.substr(pos, len)) != string::npos)
      {
         return len;
      }
   }
   return 0;
}

int main()
{
   string X, Y;
   int S, R;
   cout << "Enter Input" << endl;
   cin >> X >> Y >> S >> R;
   int n = X.size();
   string revY = Y;
   reverse(revY.begin(), revY.end());

   int i = 0;
   int normal = 0, reversed = 0;
   while (i < n)
   {
      int len1 = findMatch(X, Y, i);
      int len2 = findMatch(X, revY, i);

      if (len1 == 0 && len2 == 0)
      {
         cout << "Impossible" << endl;
         return 0;
      }

      if ((len1 >= len2 && len1 > 0) || len2 == 0)
      {
         ++normal;
         i += len1;
      }
      else
      {
         ++reversed;
         i += len2;
      }
   }
   cout << normal * S + reversed * R << endl;
   return 0;
}