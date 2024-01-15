//Find the sum of the array usin recursion

#include<iostream>
using namespace std;

int sumOfArray(int arr[], int m, int n){
    if(m==n-1){
        return arr[m];
    }
    return (arr[m]+ sumOfArray(arr, m+1, n));
}

int main(){
    int arr[5];
    cout<<"Enter the element of the array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int result = sumOfArray(arr, 0, 5);
    cout<<result;
}

