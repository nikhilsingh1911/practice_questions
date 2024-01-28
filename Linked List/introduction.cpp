/*
    Linked List.
    ->Linked list is a linear data structure used to store a list of values.


    A single memory block with partitions.
    memory blocks linked to each other...

    Challenges of array
    1. Static size
    2. Contiguous memory location.
    3. inserting and deleting is costly in array O(n).

    Advantages of a linked list over an array.
    1. Dynamic size
    2. Non-contiguous memory location
    3. Insertion and Deletion is non expensive.
    4.
*/

#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head; 
    int currPos = 0;
    while(currPos!= pos-1){
        temp = temp->next;
        currPos++;
    }
    // temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
}
void insertAtTail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
int main()
{
    // Node *n = new Node(1);
    // cout << n->val << " " << n->next << endl;

    Node *head = NULL;
    // insertAtHead(head, 6);
    // insertAtHead(head, 5);
    // insertAtHead(head, 4);
    // insertAtHead(head, 3);
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    insertAtPosition(head, 3, 2);
    display(head);
    insertAtTail(head, 8);
    display(head);
}