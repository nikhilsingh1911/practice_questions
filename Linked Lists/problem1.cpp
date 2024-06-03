// reverse a linked list
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

void insertAtHead(Node *&head, int d)
{
   Node *temp = new Node(d);
   temp->next = head;
   head = temp;
}

void insertAtEnd(Node *tail, int d)
{
   Node *temp = new Node(d);
   tail->next = temp;
   tail = temp;
}

Node *reverse(Node *&head)
{
   if (head == NULL || head->next == NULL)
   {
      return head;
   }
   Node *curr = head;
   Node *prev = NULL;
   Node *forward = NULL;
   while (curr != NULL)
   {
      forward = curr->next;
      curr->next = prev;
      prev = curr;
      curr = forward;
   }
   return prev;
}

void printNode(Node *head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}

int main()
{
   Node *n1 = new Node(0);
   Node *head = n1;
   Node *tail = n1;
   insertAtHead(head, 6);
   printNode(head);
   insertAtHead(head, 5);
   printNode(head);
   insertAtHead(head, 4);
   printNode(head);
   insertAtHead(head, 3);
   printNode(head);
   insertAtEnd(tail, 7);
   printNode(head);

   cout << "After the reversel of the link list." << endl;
   Node *reve = reverse(head);
   printNode(reve);
}