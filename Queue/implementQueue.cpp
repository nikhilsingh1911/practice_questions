// implementing the queue using array

#include <iostream>

using namespace std;

class Queue
{

   int *arr;
   int front;
   int rear;
   int size;

public:
   Queue()
   {
      size = 100001;
      arr = new int[size];
      front = 0;
      rear = 0;
   }

   void push(int d)
   {
      if (rear == size)
      {
         cout << "Queue is full";
      }
      else
      {
         arr[rear] = d;
         rear++;
      }
   }

   int pop(int d)
   {
      if (front == rear)
      {
         return -1;
      }
      else
      {
         int ans = arr[front];
         arr[front] = -1;
         front++;
         if (front == rear)
         {
            front = 0;
            rear = 0;
         }
         return ans;
      }
   }

   int Front()
   {
      if (front == rear)
      {
         return -1;
      }
      else
      {
         return arr[front];
      }
   }

   bool isempty()
   {
      if (front == rear)
      {
         return true;
      }
      else
      {
         return false;
      }
   }
};

int main(){
   Queue q;
   
}