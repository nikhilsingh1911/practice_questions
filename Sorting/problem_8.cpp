/*
    Write a program to find kth smallest element in a array using quick Sort:
*/

#include<iostream>
using namespace std;
int partition(int arr[], int first, int last){
    int pivot = arr[last];
    int n = first-1;
    int m = first;
    for(;m<last;m++){
        if(arr[m]<pivot){
            n++;
            swap(arr[n], arr[m]);
        }
    }
    swap(arr[n+1], arr[last]);
    return n+1;
}
void quickSort(int arr[], int first, int last){
    if(first>=last){
        return ;
    }
    int pivot = partition(arr, first, last);
    quickSort(arr, first, pivot-1);
    quickSort(arr, pivot+1, last);
}
int main(){
    int n; 
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ele;
    cout<<"Enter the nth element you want: ";
    cin>>ele;
    cout<<ele<<"th smallest element of the array is"<<arr[ele];
}