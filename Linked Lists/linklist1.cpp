#include<iostream>
using namespace std;

// Linked List :- It is a type of linear data structure and collections of nodes.
// Typed of Linked List
//  1. Singly Linked List
//  2. Doubly Linked List
//  3. Circular Linked List
//  4. Circular Doubly Linked List

// Singly Linked List.

class Node
{
public:
// this is the data part of the node
    int data;
    // this is the address part of the node
    Node *next;
    // this constructor will called when the object of the class is creatred
    // and this constructor will will responsible for the next node data intake  i.e like this will make the node last 
    //(Kehne ka mtlv ye ki jb constructor call hoga to ye bala constructor data ko node m dale ga
    //or kyuki ye node us time last hoga to ye bala node ka address part Zero ko point kre ga)
    Node(int data){
        //this will store the data in nodes data part
        this->data = data;
        //this will point to Zero because there is no next node after this.
        this->next = NULL;
    }
};

int main()
{
    Node* n1 = new Node(10);

    cout<<n1->data<<endl;
    cout<<n1->next<<endl;
    return 0;
}