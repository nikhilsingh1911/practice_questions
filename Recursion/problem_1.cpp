/*
    Recursion Introduction

    What is Recursion?
    ->    In Recursion we try to solve a bigger problem by finding out the solutions to smaller sub problems we represents these problems in the form of functions and these functions call itself to solve smaller subproblem..
*/


#include<iostream>
using namespace std;

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int result = fact(n);
    cout<<result;
    return 0;
}