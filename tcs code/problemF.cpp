#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = acos(-1.0);
const double TWO_PI = 2 * PI;

// Compute Y(x) according to problem's formula
double computeY(double x, const vector<int> &A, const vector<int> &B)
{
   double y = 0.0;
   for (int i = 0; i < A.size(); ++i)
      y += sin(A[i] * x + B[i]);
   return y;
}

int main()
{
   int n;
   cin >> n;
   vector<int> A(n), B(n);
   for (int i = 0; i < n; i++)
      cin >> A[i];
   for (int i = 0; i < n; i++)
      cin >> B[i];

   int SAMPLES = 20000;
   double dx = TWO_PI / SAMPLES;

   // Calculate Y(x) at each sampled x
   vector<double> xs, ys;
   for (int i = 0; i <= SAMPLES; i++)
   {
      double x = i * dx;
      xs.push_back(x);
      ys.push_back(computeY(x, A, B));
   }

   // Find peaks (local maxima)
   vector<double> peak_xs;
   for (int i = 1; i < SAMPLES; i++)
   {
      if (ys[i] > ys[i - 1] && ys[i] > ys[i + 1])
         peak_xs.push_back(xs[i]);
   }

   // Find the widest valley (largest gap between peaks)
   int widest_valley_idx = 0;
   double widest_width = 0.0;
   for (int i = 1; i < peak_xs.size(); i++)
   {
      double width = peak_xs[i] - peak_xs[i - 1];
      if (width > widest_width)
      {
         widest_width = width;
         widest_valley_idx = i;
      }
   }

   if (peak_xs.size() < 2)
   {
      cout << "0 0.0000\n"; // No valley found
   }
   else
   {
      cout << widest_valley_idx << " " << fixed << setprecision(4) << widest_width << endl;
   }

   return 0;
}