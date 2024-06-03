// to find the middle element of the linked list
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
// to insert the element at the head of the node
void insertAtHead(Node *&head, int d)
{
   Node *temp = new Node(d);
   temp->next = head;
   head = temp;
}
// to insert the element at the end of the node
void insertAtEnd(Node *tail, int d)
{
   Node *temp = new Node(d);
   tail->next = temp;
   tail = temp;
}
// to print every node of the linked list
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
// to get the length of the linked list(no. of elements in the linked list)
int getLength(Node *head)
{
   int cnt = 1;
   Node *temp = head;
   while (temp != NULL)
   {
      cnt++;
      temp = temp->next;
   }
   return cnt;
}
// to get the middle element of the linked list
Node *middleEle(Node *head, int position)
{
   int cnt = 1;
   Node *temp = head;
   while (cnt < position)
   {
      temp = temp->next;
      cnt++;
   }
   return temp->next;
}
// this will send the middle element of the linked list
// if the no of element is even then second middle element is the middle element
// and if the no of the element is odd then middle element is middle element..
Node *getMiddleElement(Node *head)
{
   if (head == NULL || head->next == NULL)
   {
      return head;
   }
   int length = getLength(head);
   int middle = length / 2;
   if (length % 2 == 0)
   {
      return middleEle(head, middle - 1);
   }
   else
   {
      return middleEle(head, middle);
   }
}

int main()
{
   Node *n1 = new Node(0);
   Node *head = n1;
   Node *tail = n1;
   insertAtHead(head, 6);
   printNode(head);
   insertAtHead(head, 4);
   printNode(head);
   insertAtHead(head, 5);
   printNode(head);
   insertAtHead(head, 3);
   printNode(head);
   insertAtEnd(tail, 7);
   printNode(head);
   Node *middleElement = getMiddleElement(head);
   cout << "The middle element of the linked list is : " << middleElement->data << endl;
   return 0;
}