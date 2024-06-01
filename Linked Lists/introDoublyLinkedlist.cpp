#include <iostream>
using namespace std;

class Node
{
public:
   Node *prev;
   int data;
   Node *next;

   Node(int d)
   {
      this->data = d;
      this->prev = NULL;
      this->next = NULL;
   }
   ~Node()
   {

      if (next != NULL)
      {
         delete next;
         next = NULL;
      }
   }
};

void printnode(Node *head)
{
   Node *temp = head;

   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}

int getLength(Node *head)
{
   int len = 1;
   Node *temp = head;

   while (temp != head)
   {
      len++;
      temp = temp->next;
   }
   return len;
}

void insertNodeAtHead(Node *&head, Node *&tail, int d)
{
   if (head == NULL)
   {
      Node *temp = new Node(d);
      head = temp;
      tail = temp;
   }
   else
   {
      Node *temp = new Node(d);
      temp->next = head;
      head->prev = temp;
      head = temp;
   }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
   if (tail == NULL)
   {
      Node *temp = new Node(d);
      tail = temp;
      head = temp;
   }
   else
   {
      Node *temp = new Node(d);
      tail->next = temp;
      temp->prev = tail;
      // temp->next = NULL;
      tail = temp;
   }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
   if (position == 1)
   {
      insertNodeAtHead(head, tail, d);
      return;
   }
   Node *temp = head;
   int cnt = 1;
   while (cnt < position - 1)
   {
      temp = temp->next;
      cnt++;
   }

   if (temp->next == NULL)
   {
      insertAtTail(tail, head, d);
      return;
   }

   Node *nodeToInsert = new Node(d);
   nodeToInsert->next = temp->next;
   temp->next->prev = nodeToInsert;
   temp->next = nodeToInsert;
   nodeToInsert->prev = temp;
}

void deleteNode(Node *&head, int position)
{
   if (position == 1)
   {
      Node *temp = head;
      head = temp->next;
      temp->next->prev = NULL;
      temp->next = NULL;
      delete temp;
   }
   Node *cur = head;
   Node *pre = NULL;
   int cnt = 1;
   while (cnt < position)
   {
      pre = cur;
      cur = cur->next;
      cnt++;
   }
   cur->prev = NULL;
   pre->next = cur->next;
   cur->next = NULL;
}

int main()
{
   // Node *n1 = new Node(10);

   Node *head = NULL;
   Node *tail = NULL;
   printnode(head);
   int length = getLength(head);
   cout << "Length is : " << length << endl;

   insertNodeAtHead(head, tail, 10);
   printnode(head);
   insertAtTail(tail, head, 11);
   printnode(head);
   insertAtTail(tail, head, 12);
   printnode(head);

   insertAtPosition(head, tail, 1, 8);
   printnode(head);
   insertAtPosition(head, tail, 2, 9);
   printnode(head);
   insertAtPosition(head, tail, 6, 13);
   printnode(head);

   deleteNode(head, 6);
   printnode(head);
   deleteNode(head, 2);
   printnode(head);
}