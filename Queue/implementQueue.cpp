// implementing the queue using array

#include <iostream>
using namespace std;
class Queue
{

   int size;
   int frnt;
   int last;
   int *arr;

public:
   Queue()
   {
      size = 100001;
      arr = new int[size];
      frnt = 0;
      last = 0;
   }
   void push(int data)
   {
      if (last == size)
      {
         cout << "Queue is FUll" << endl;
      }
      else
      {
         arr[last] = data;
         last++;
      }
   }
   void pop()
   {
      if (frnt == last)
      {
         // in case we have to return the deleted element.
         // return -1;
         cout << "Queur is Already Empty" << endl;
      }
      else
      {
         // int ans = arr[front];
         arr[frnt] = -1;
         frnt++;
         if (frnt == last)
         {
            frnt = 0;
            last = 0;
         }
         // return ans; //this is when we have to return the delete element
      }
   }
   int front()
   {
      if (frnt == last)
      {
         cout << "Queue is empty";
         return -1;
      }
      else
      {
         return arr[frnt];
      }
   }
   int rear()
   {
      if (last == frnt)
      {
         cout << "No element in the Queue" << endl;
         return -1;
      }
      else
      {
         return arr[last - 1];
      }
   }
   bool isEmpty()
   {
      if (frnt == last)
      {
         return true;
      }
      else
      {
         return false;
      }
   }
};

int main()
{
   Queue q;
   q.push(4);
   q.push(10);
   q.push(2);
   q.push(8);
   q.push(5);
   cout << "The first Element of the Queue " << q.front() << endl;
   cout << "The Last Element of the Queue " << q.rear() << endl;
}