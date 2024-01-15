// For a given array, print the minimum value recursively

#include <iostream>
using namespace std;

int printMamimum(int arr[], int m, int n)
{
    if (m == n-1){
        return arr[m];
    }
    return max(arr[m], printMamimum(arr, m+1, n));
}

int main()
{
    int arr[5];
    cout << "Enter the element of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout<<"Maximum number is: "<<endl;
    cout << printMamimum(arr, 0, 5);
}