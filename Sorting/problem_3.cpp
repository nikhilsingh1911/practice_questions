/*
    Inerstion Sort

    Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.


    Worst Time Complexity of insertion sort is ->  O(n^2)
    Best Time Complexity of insertion sort is ->  Theta(n)
    Space Complexity of insertion sort is ->  O(1)


    Application of Insertion Sort
    Array is almost sorted/few unsorted elements

    Insertion Sort is stable sorting algorithm
*/

#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main(){
    int arr[10], n; 
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionSort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}