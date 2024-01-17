/*
    Binary Search using recusrion 
*/


#include<iostream>
using namespace std; 

int binarySearch(int arr[], int first, int size, int searchElement){
    int mid; 
    mid=(first + size)/2;
    if(first>size){
        return -1;
    }
    if(arr[mid]==searchElement){
        return 1;
    }
    if(arr[mid]>searchElement){
        bool result = binarySearch(arr, first, mid-1, searchElement);
        return result;
    }
    else{
        bool res = binarySearch(arr, mid+1, size, searchElement);
        return res;
    }
    // return 0;
}

int main(){
    int arr[10], size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int start = 0;
    int ele;
    cout<<"Enter the element you want to search: ";
    cin>>ele;
    if(binarySearch(arr ,start, size, ele)){
        cout<<"Element found";
    } else{
        cout<<"Element not found";
    }
}