#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> stk;
    stk.push("Nikhil");
    stk.push("singh");
    stk.push("rana");
    cout<<"Printing the top element of the stack : "<< stk.top()<<endl;
    stk.pop();
    cout<<"Printing the top element of the stack after delete: "<< stk.top();
    // to print the size of stack we use .size()method
    // to check if the stack is empty or not we use .empty() method ans this method gives output in the form of 0's and 1's if the output is 0 the stack is not empty, and if the output is 1 than the stack is empty

}