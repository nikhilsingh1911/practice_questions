/*
    Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

    ->Note that you must do this in-place without making a copy of the array
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, arr[10];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int swa = 0;
        for (int j = 0; j < n - 1; j++)
        {

            if (arr[j] == 0)
            {
                swap(arr[j], arr[j + 1]);
                swa++;
            }
        }
        if(swa==0){
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}