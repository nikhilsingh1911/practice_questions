// Given as array , print all the elements of the array recurrsively


#include<iostream>
using namespace std;

void printArray(int arr[], int m, int n){
    cout<<arr[m++]<<" ";
    if(m<n){
    printArray(arr, m, n);
    }
}

int main(){
    int arr[5];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    printArray(arr,0, 5);
}