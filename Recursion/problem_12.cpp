//Given an array and find the element.. using recusion

#include<iostream>
using namespace std;
int findElement(int arr[], int size, int searcElement){
    if(size==0){
        return 0;
    }
    if(arr[0]==searcElement){
        return 1; 
    }
    else{
        findElement(arr+1, size-1, searcElement);
    }
}

int main(){
    int arr[10], n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ele;
    cout<<"Enter the element you want to find: ";
    cin>>ele;
    if(findElement(arr, n, ele)!=0){
        cout<<"Element found ";
    }
    else{
        cout<<"Element not found";
    }
}