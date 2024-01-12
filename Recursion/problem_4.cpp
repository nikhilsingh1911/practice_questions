/*
    Given two numbers p & q, find the value of p^q using recursive function.
*/

#include <iostream>
using namespace std;

// int powerOfNumber(int num, int pow)
// {
//     if (pow == 0)
//     {
//         return 1;
//     }
//     else if (pow == 1)
//     {
//         return num;
//     }

//     return num * powerOfNumber(num, pow - 1);
// }

int powerOfNumber2(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }

    if(pow%2 ==0){
        int div = pow/2;
        int rsult = powerOfNumber2(num, div);
        return rsult*rsult;
    }
    else{
        int div = (pow-1)/2;
        int result = powerOfNumber2(num, div);
        return  num*result*result;
    }
}

int main()
{
    int number, power;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the power of the number: ";
    cin >> power;

    int result = powerOfNumber2(number, power);
    cout << result;
}