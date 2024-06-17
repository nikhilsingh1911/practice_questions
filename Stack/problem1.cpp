// Implementing the Stack using linked list

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
      this->next = nullptr;
   }
};

void InsertAtTail(Node *tail, int d)
{
   Node *temp = new Node(d);
   tail->next = temp;
   tail = tail->next;
}

class Stack
{
public:
   Node *top;
   Stack()
   {
      top = nullptr;
   }

   bool empty()
   {
      if (top == nullptr)
      {
         return true;
      }
      else
      {
         return false;
      }
   }
   void push(int d)
   {
      Node *temp = new Node(d);
      temp->next = top;
      top = temp;
   }

   int pop()
   {
      if (top == nullptr)
      {
         cout << "Stack is empty " << endl;
         return -1;
      }
      int val = top->data;
      Node *temp = top;
      top = top->next;
      delete temp;
      return val;
   }
   int peek()
   {
      if (top == nullptr)
      {
         cout << "Stack is Empty" << endl;
         return -1;
      }
      return top->data;
   }
};

int main()
{
   Stack s;
   s.push(5);
   s.push(6);
   s.push(7);
   s.push(8);
   cout << s.peek() << endl;
   cout << s.pop() << endl;
   cout << s.peek() << endl;
   return 0;
}