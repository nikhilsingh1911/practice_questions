// Quick Sort using recursion
// Quick sort uses divide and conquer algorithm
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int first, int last)
{
    int pivot = arr[first];
    int count = 0;
    for (int i = first + 1; i <= last; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // placing pivot at right index (after comparison)
    int pivotInd = first + count;
    swap(arr[pivotInd], arr[first]);

    int i = first, j = last;
    while (i < pivotInd && j > pivotInd)
    {
        // when the element is smaller than the pivot element on left side
        while (arr[i] <= pivot)
        {
            i++;
        }
        // when the elements is larger than pivot element on right side
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotInd && j > pivotInd)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotInd;
}

void quickSort(int *arr, int first, int last)
{
    if (first >= last)
    {
        return;
    }
    // to swap the elements
    // like all small elements from pivot element is on left size and all the large element from pivot element is on right side.
    int p = partition(arr, first, last);
    // for left side
    quickSort(arr, first, p - 1);
    // for right side
    quickSort(arr, p + 1, last);
}

int main()
{
    int arr[10] = {45, 56, 2, 3, 50, 13, 9, 25, 33, 26};
    int size = 10;

    quickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}