#include<iostream>
#include<map>
using namespace std;

//data is stored in the form of key.
//every key is unique and every key points to a single value...

int main(){

    map<int, string> m;
    m[1] = "nikhil";
    m[2] = "singh";
    m[13] = "rana";
//here 1, 2, 13 is key and the "nikhil, singh, rana" is value..
    for(auto i: m ){
        cout<< i.first<<" "<< i.second<< endl;
    }

    // other way to insert data is.. 

    m.insert({7, "mr.been"});
    cout<<"After inserting with new way: "<<endl;
    for(auto i: m ){
        cout<< i.first<<" "<< i.second <<endl;
    }

    // to check the element is present or not we use . count(value);
    // to erase the value we use .erase(value of key) method
    //in map finding , inserting, erasing etc have the time complexity of O(logn)..
    //find return the iterator of the particular data


    auto it = m.find(7);

    for(auto i = it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
}