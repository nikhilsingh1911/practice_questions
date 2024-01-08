/*
    Pointer..
    data_type *pointer_name;
    pointer stores the address..
    * Address-Of pointer
    -> if we want to access the address of a memory bucket we can use address-of operator..
    address-of operator(&).. This is address of operator.
    *The process to access the value of address stored in pointer variable is called deferencing. And we can access that by using dereference operator
*/

#include<iostream>
using namespace std;
int main(){
    cout<<"hello"<<endl;
    int x=1;
    int y=1;
    int *z;
    z = &y;
    cout<<&x<<endl<<&y;
    cout<<endl<<z<<endl;
    cout<<"Dereferncing : "<<*z;

    // Changing the value of varaible using pointer..
    *z = 20;
    cout<<"The updated value of y is (accessed using variable name after updation): "<<y<<"\n";
    cout<<"The updated value of y is (accessed using the pointer ): "<<*z<<"\n";
    cout<<"But the address is same : "<<z;
    int k = 109;
    int *ptr = &k;
    // ptr = 10  ....-> we cannot do this as pointer variable only stores the value of address.
    // *ptr = &y; ...-> we cannot do this as *ptr is now pointing to the k variable and a int variable do not store the value of address.
    
    cout<<"Giving tutorial to khushboo about github";
}