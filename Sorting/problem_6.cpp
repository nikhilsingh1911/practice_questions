/*
    Merge Sort

    We use divide and conquere technique in merge Sort.


    Time Complexity of Merge Sort is -> O(nlogn)
    Space Complexity of Merge Sort is -> O(n)


    Merge Sort is a stable sort algorithm.


    slower for smaller tasks.
    O(n) extra space.
    Goes through whole process even if array is sorted.
*/

#include <iostream>
using namespace std;

void merge(int arr[], int first, int mid, int last)
{
    int n = mid - first + 1;
    int m = last - mid;
    int arr1[n], arr2[m];

    for(int i=0;i<n;i++){
        arr1[i]=arr[first+i];
    }
    for(int i=0;i<m;i++){
        arr2[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k = first;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr[k++] = arr2[j++];
    }
}

void mergeSort(int arr[], int first, int last)
{
    int mid;
    if (first >= last)
    {
        return;
    }
        mid = (last + first) / 2;
        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);
        merge(arr, first, mid, last);
}

int main()
{
    int arr[10], n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}