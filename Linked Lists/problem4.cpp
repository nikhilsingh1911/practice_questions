#include <iostream>
using namespace std;

class Node
{
   int data;
   Node *next;
   Node(int d)
   {
      this->data = d;
      this->next = NULL;
   }
}