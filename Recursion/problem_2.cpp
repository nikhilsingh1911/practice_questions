/*
    Fibonacci Series


    0,1,1,2,3,5,8,13,21....
*/

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    int sum = fibonacci(n - 1) + fibonacci(n - 2);
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number upto which you want to have fibonnaci: ";
    cin >> n;
    int result;
    result = fibonacci(n);
    cout << result;
}