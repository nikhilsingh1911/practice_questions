// Merge Sort using Recursion
// Merge sort uses divide and conquer technique to solve its problem
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int st, int lt)
{
    int mid = (lt + st) / 2;
    int len1 = mid - st + 1;
    int len2 = lt - mid;

    // dynamic memory allocation for the array..
    int *first = new int[len1];
    int *last = new int[len2];

    int k = st;
    // to initialize all the divided elements to the array so that the can be sorted and merged.
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        last[i] = arr[k++];
    }

    int index1 = 0, index2 = 0;
    k = st;
    while (index1 < len1 & index2 < len2)
    {
        if (first[index1] < last[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = last[index2++];
        }
    }
    // this is because the size of first and last may or may not be same..
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = last[index2++];
    }

    // to release the occupied the dynamic memory
    
    delete[] first;
    delete[] last;
    //memory is released after this
    // advised to always release the memroy whenever you are using dynamic memory allocation..
}

void mergesort(int arr[], int first, int last)
{
    if (first >= last)
    {
        return;
    }
    int mid = (last + first) / 2;
    // for left side
    mergesort(arr, first, mid);
    // for right side
    mergesort(arr, mid + 1, last);
    // to merge the divided arrays
    merge(arr, first, last);
}

int main()
{
    int arr[10] = {45, 56, 2, 3, 50, 13, 9, 25, 33, 26};
    int size = 10;
    mergesort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}