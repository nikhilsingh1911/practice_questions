// Implemention a Circular Queue

#include <iostream>
using namespace std;

class CircularQueue
{
   int *arr;
   int frnt;
   int last;
   int size;

public:
   CircularQueue(int n)
   {
      this->size = n;
      arr = new int[size];
      frnt = last = -1;
   }
   void push(int d)
   {
      if ((frnt == 0 && last == size - 1) || last == (frnt - 1) % (size - 1))
      {
         cout << "Queue is Full";
      }
      else if (frnt == -1)
      {
         frnt = last = 0;
         arr[last] = d;
      }
      else if (last == size - 1 && frnt != 0)
      {
         last = 0;
         arr[last] = d;
      }
      else
      {
         last++;
         arr[last] = d;
      }
   }
   void pop()
   {
      if (frnt == -1)
      {
         cout << "Queue is Empty" << endl;
      }
      if (frnt == last)
      { // only single element present
         frnt = last = -1;
      }
      else if (frnt == size - 1)
      {
         frnt = 0;
      }
      else
      {
         frnt++;
      }
   }
   int front()
   {
      if (last == 0)
      {
         cout << "Queue is Empty" << endl;
         return -1;
      }
      return arr[frnt];
   }
   int rear()
   {
      if (last == 0)
      {
         cout << "Queue is Empty" << endl;
         return -1;
      }
      int lst = (frnt + last) % size;
      return arr[lst];
   }
};

int main()
{
   CircularQueue cq(5);
   cq.push(10);
   cq.push(1);
   cq.push(6);
   cq.push(50);

   cout << "front ele is : " << cq.front() << endl;
   cout << "front ele is : " << cq.rear() << endl;
   return 0;
}