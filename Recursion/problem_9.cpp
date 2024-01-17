//Say digit

//412 answer would be Four One Two

#include<iostream>
using namespace std; 

void saydigit(int n){
    string str[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if(n==0){
        return ;
    }

    int digit = n%10;
    n = n/10;
    
    saydigit(n);
    cout<<str[digit]<<" ";
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    saydigit(n);
}