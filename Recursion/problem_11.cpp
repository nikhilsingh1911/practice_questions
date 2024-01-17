// given an array return the sum of all the elements of the array...(using recursion)

#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;
    if (size == 0)
    {
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else
    {
        sum  = arr[0] + sumArray(arr+1, size - 1);
    }
    return sum;
}

int main()
{
    int arr[10], n;
    cout << "Enter the size of the array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout <<"Sum is:" << sumArray(arr, n);
}
