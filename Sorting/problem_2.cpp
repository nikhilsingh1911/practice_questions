/*
    Selection Sort.
    Repeatedly find min element in unsorted array & place it at the beginning


    Time Complexity of the Selection Sort is O(n^2)
    Space Complexiity of the Selection Sort is O(1)

    Selection Sort is Unstable Sorting Algorithm.

    Application of Selection Sort.
    1 -> 
*/
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int mn=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[mn]>arr[j]){
                mn=j;
            }
        }
        if(mn!=i){
            swap(arr[i], arr[mn]);
        }
    }
}

int main(){
    int arr[10], n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selectionSort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}