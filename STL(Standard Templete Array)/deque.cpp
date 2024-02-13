#include<iostream>
#include<deque>
//deque is double ended queue....
using namespace std;
//deque is dynamic in nature
int main(){
    
    deque<int> d;

    d.push_back(2);
    d.push_back(3);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.push_front(1);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Print first index element: "<< d.at(0)<<endl;

}