#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<string> ue;
    ue.push("Nikhil");
    ue.push("Singh");
    ue.push("Rana");

    cout<<"Printing the first element of the queue: "<<ue.front()<<endl;
    ue.pop();
    cout<<"Printing the first element of the queue after the deletion : "<<ue.front()<<endl;

    // to get the size of queue we use .size() method..
    //
}