/*
    Quick Sort
    

    Time Complexity of Quick Sort is -> O(nlogn)
    Space Complexity of Quick Sort is -> O(1)


    Merge Sort performs better when Large Data sets are their whereas Quick Sort performs better when Smaller data sets are their

    Quick sort is unstable sorting algorithm.

    Merge sort is preferd in Linked List
    We cannot use quick sort in Linked list


    Quick Sort is used where the new memory is costly.
*/

#include<iostream>
using namespace std;

int partition(int arr[], int first, int last){
    int pivot = arr[last];
    int i=first-1;
    int j=first;
    for(;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[last]);
    return i+1;
}

void quicksort(int arr[], int first, int last){
    if(first>=last){
        return;
    }
    int pivot = partition(arr, first, last);
    quicksort(arr, first, pivot-1);
    quicksort(arr, pivot+1, last);
}

int main(){
    int n, arr[10];
    cout<<"Enter the size of the array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first=0;
    quicksort(arr, 0, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}