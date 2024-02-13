#include<iostream>
#include<list>
using namespace std;

// we cannot access any element directly in list we have to traverse if we want to add any element
int main(){
    list<int> l;
    l.push_back(2);
    l.push_front(10);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl<<"after erase "<<endl;
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of the list is :"<<l.size()<<endl;
}