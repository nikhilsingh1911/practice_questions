//to check whether the elements in array are sorted or not
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, arr[10];
    cout << "Enter the size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int var = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            var = 1;
        }
    }
    if (var == -1)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
    return 0;
}