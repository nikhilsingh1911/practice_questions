#include <iostream>
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
    // and this constructor will responsible for the next node data intake  i.e like this will make the node last
    //(Kehne ka mtlv ye ki jb constructor call hoga to ye bala constructor data ko node m dale ga
    // or kyuki ye node us time last hoga to ye bala node ka address part Zero ko point kre ga)
    Node(int data)
    {
        // this will store the data in nodes data part
        this->data = data;
        // this will point to Zero because there is no next node after this.
        this->next = NULL;
    }
    // to insert a node at head
    // refernce taken in function so that no copy is made all the operations are done on the original copy (Node* &head)

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "DATA freed" << value << endl;
    }
};

void InsertAtHead(Node *&head, int d)
{
    // new node is created to add at the head
    Node *temp = new Node(d);
    // new node will point to previous head node.
    temp->next = head;
    // now head will be update to new node.
    head = temp;
}

// to insert at the end of the linked list

void InsertAtEnd(Node *&tail, int d)
{
    // to create a new node
    Node *temp = new Node(d);
    // here the tail will point to the new node
    tail->next = temp;
    // here the tail will point to next node of newly added node(which is null).
    tail = tail->next;
}

// to insert the element in the Position of the list
void InsertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // when the position is first.
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    // we will start from the first node because we cannot directly go to a certain position directly in linked list we have to traverse through it.

    Node *temp = head;
    // count to go to desired position
    int cnt = 1;
    // this will go this count is position - 1
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // when the position last of the linked list
    if (temp->next == NULL)
    {
        InsertAtEnd(tail, d);
        return;
    }

    // new node is created which will be inserted in the certain position
    Node *NewInsert = new Node(d);
    // new node point to the next node to new node.
    NewInsert->next = temp->next;
    // previous node of the new node points to the new node.
    // if we didn't do that then after creation of new node we will not able to access the new node or the next nodes of the new node
    temp->next = NewInsert;
}
void printsLinkList(Node *head)
{
    // the temp is point at the head
    Node *temp = head;
    // this loop will traverse until the temp points to last element of the linked list.
    while (temp != NULL)
    {
        // this will print the data
        cout << temp->data << " ";
        // this the update the address in temp to next node after the printing of current node.
        temp = temp->next;
    }
    cout << endl;
}

// to delete the node.
// using position
void DeleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // mermory freeing of start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any node other than the first.
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
// void DeleteNodeUsingValue(Node *&head, int value)
// {
//     Node *curr = head;
//     Node *prev = NULL;
//     Node *temp = head;
//     int count = 1;
//     while (temp != NULL)
//     {
//         prev = curr;
//         curr = curr->next;
//         int var = temp->data;
//         if (var == value)
//         {
//             cout << "hehe" << endl;
//             if (count == 1)
//             {

//                 Node *temp1 = head;
//                 head = head->next;
//                 // mermory freeing of start node
//                 temp1->next = NULL;
//                 delete temp1;
//             }
//             else
//             {
//                 cout << "hello2" << endl;
//                 prev->next = curr->next;
//                 curr->next = NULL;
//                 delete curr;
//             }
//         }
//         temp = temp->next;
//         count++;
//     }
// }

int main()
{
    Node *n1 = new Node(12);
    // cout << n1->data << endl;
    // cout << n1->next << endl;
    Node *head = n1;
    Node *tail = n1;
    InsertAtHead(head, 11);
    printsLinkList(head);
    InsertAtHead(head, 10);
    printsLinkList(head);
    InsertAtEnd(tail, 13);
    printsLinkList(head);
    InsertAtPosition(head, tail, 3, 19);
    printsLinkList(head);
    InsertAtPosition(head, tail, 6, 9);
    printsLinkList(head);
    DeleteNode(head, 6);
    printsLinkList(head);
    DeleteNode(head, 2);
    printsLinkList(head);
    return 0;
}