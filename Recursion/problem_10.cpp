// Check whether the given array is sorted or not... Using Recursion

#include<iostream>
using namespace std;

bool checkSort(int arr[], int size){
    if(size==0 || size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
       bool remaining = checkSort(arr+1 ,size-1);
       return remaining;
    }
}

int main(){
    int arr[10], n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(checkSort(arr,n)){
        cout<<"Array is Sorted";
    }else{
        cout<<"Array is not sorted";
    }
}