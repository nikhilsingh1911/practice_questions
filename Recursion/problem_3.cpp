/*
    Ginen an integer, find out the sum of its digits using recusion
*/

#include<iostream>
using namespace std;

int intergerSum(int num){
    if(num>=0 && num<=9){
        return num;
    }
    // int sum = 0;
    // num = num%10;
    // int finalresult =  sum + 
    return intergerSum(num/10) + num%10;
}

int main(){
    int integer;
    cout<<"Enter the integer: ";
    cin>>integer;
    int result = intergerSum(integer);
    cout<<result;
}