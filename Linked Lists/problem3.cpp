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

   ~Node()
   {
      int value = this->data;
      if (this->next != NULL)
      {
         delete next;
         next = NULL;
      }

      cout << "Memory is free for node with data " << value << endl;
   }
};

void insertNode(Node *&tail, int element, int d)
{
   // assuming that the element is present in this list
   Node *temp = new Node(d);
   if (tail == NULL)
   {
      Node *newNode = new Node(d);
      tail = newNode;
      newNode->next = newNode;
   }
   else
   {
      Node *curr = tail;
      while (curr->data != element)
      {
         curr = curr->next;
      }
      Node *temp = new Node(d);
      temp->next = curr->next;
      curr->next = temp;
   }
}
void printNode(Node *tail)
{
   if (tail == NULL)
   {
      cout << "List is empty " << endl;
   }
   Node *temp = tail;
   do
   {
      cout << tail->data << " ";
      tail = tail->next;
   } while (tail != temp);
   cout << endl;
}

bool isCircular(Node *head)
{
   if (head == NULL)
   {
      return true;
   }

   Node *temp = head->next;
   while (temp != NULL && temp != head)
   {
      temp = temp->next;
   }
   if (temp == head)
   {
      return true;
   }
   return false;
}

int main()
{
   Node *tail = NULL;
   insertNode(tail, 1, 3);
   printNode(tail);
   insertNode(tail, 3, 4);
   printNode(tail);
   insertNode(tail, 4, 6);
   printNode(tail);
   insertNode(tail, 4, 5);
   printNode(tail);
   if (isCircular(tail))
   {
      cout << "Linked list is circular";
   }
   else
   {
      cout << "Linked list is not circular";
   }
}