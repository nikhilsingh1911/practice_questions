// find the highest common factor of two numbers

#include <iostream>
using namespace std;

int findHCF(int a, int b)
{
    int ans = 1;
    if (a > b)
    {
        for (int i = 1; i <= b; i++)
        {
            if (b % i == 0 && a % i == 0)
            {
                ans = i;
            }
        }
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                ans = i;
            }
        }
    }
    return ans;
}
// another approach
int GreatestCommonDivisor(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;
    int result = findHCF(a, b);
    cout << "The highest common factor of two numbers " << a << " and " << b << " is " << result<<endl;
    int result2 = GreatestCommonDivisor(a, b);
    cout << "The highest common factor of two numbers " << a << " and " << b << " is " << result<<" by GCD concept";
}