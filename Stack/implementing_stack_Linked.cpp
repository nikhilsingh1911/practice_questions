// In this file we will implement stack using linked list
#include <iostream>
using namespace std;

class Node
{
public:
   int data;
   Node *next;
   Node(int d)
   {
      this->data = d;
      this->next = NULL;
   }
};
class Stack
{
   Node *head;

public:
   Stack()
   {
      this->head = NULL;
   }
   // To check if the stack is empty
   bool isEmpty()
   {
      return head == nullptr;
   }
   // To add new element in the stack
   void push(int d)
   {
      // This create a new node for the given data
      Node *newnode = new Node(d);
      if (!newnode)
      {
         cout << "stack OverFlow" << endl;
      }
      // now here the newnode is at the head and head will point to newnode.
      newnode->next = head;
      head = newnode;
   }
   void pop()
   {
      if (this->isEmpty())
      {
         // Means stack is empty
         cout << "Stack underFlow" << endl;
      }
      else
      {
         // Creating a temp node which will store the topmost element of the stack
         Node *temp = head;
         // Pointing the Head of stack to the second top node so that the topmost node
         // can be delete and deallocation of the node memory can be done..
         head = head->next;
         delete temp;
      }
   }
   int peek()
   {
      // to check that what is stored on the topmost node of the stack
      if (!isEmpty())
      {
         return head->data;
      }
      else
      {
         cout << "Stack is Empty" << endl;
         return INT32_MIN;
      }
   }
};

int main()
{
   Stack st;
   st.push(1);
   st.push(88);
   st.push(60);
   st.push(15);
   int pek = st.peek();
   cout << "On peeking of the stack we get " << pek << endl;
   st.pop();
   cout << "On peeking of the stack we get " << st.peek() << endl;
   if (!st.isEmpty())
   {
      cout << "Stack is Empty" << endl;
   }
   else
   {
      cout << "Stack is not Empty" << endl;
   }
   return 0;
}