#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;
    vec.push_back(1);
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;
    vec.push_back(2);
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;
    // vec.resize(20);
    vec.push_back(3);
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;


    // to take input from user

    int inp;
    cout<<"Enter the input: ";
    cin>>inp;
    vec.push_back(inp);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}