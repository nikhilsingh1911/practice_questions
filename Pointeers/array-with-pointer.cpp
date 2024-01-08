/*
    Pointer Arithmetic...
*/

#include <iostream>
using namespace std;
int main()
{
    int arr[10], n;5
    cout << "Enter the size of the array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *ptr = &arr[0];
    for (int i = 0; i < n; i++)
    {
        cout << ptr + i << " " << *(ptr + i) << endl;
    }
    cout << arr; // prints address of array

    return 0;
}