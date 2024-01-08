/*
    Pattern problem 1

    pyramid patter
    *
    **
    ***
    ****
    *****
*/


#include<iostream>
using namespace std;

void pyramidPattern(int rowsize){
    int i=1;
    while(i<=rowsize){
        for(int j=0;j<i;j++){
            cout<<" * ";
        }
        cout<<endl;
        i++;
    }
}

int main(){
    int rowSize;
    cout<<"Enter the size of row: ";
    cin>>rowSize;

    pyramidPattern(rowSize);
}