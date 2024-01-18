/*
    Sorting Introduction

    Sorting -> Sorting is ordering of elements which can be in increasing order or decreasing order.

    Type of Sorting :-
    1. Bubble Sort
    2. Insertion Sort
    3. Selection Sort
    4. Merge Sort
    5. Quick Sort
    6. Count Sort
    7. Bucket Sort
    8. Topological Sort

    these are few types of sorting algorithms..
*/

/*
    Bubble Sort
    repeatedly swap Two adjacent elements if in wrong order

    -> maximum no. of swap in worst case in Bubble sort is when the element to placed at is a first place and vice versa..
    so if no of elements are -> 'n' the maximum swaps are (n(n-1)/2)


    Time complexity is O(n^2) in worst case.
    Space Complexity is O(1).

    Stable Sort-> Doe not disturb the order of elements with same value.
    Bubble Sort is a stable Sorting algorithm..
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10], n;
    cout << "Enter the size of the array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    int swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }
        if (swap == 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}