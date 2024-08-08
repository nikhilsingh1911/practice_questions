#include <iostream>
#include <queue>
using namespace std;

int main()
{
   queue<int> q;
   q.push(0);
   cout << "The front of the queue is " << q.front() << endl;
   q.push(1);
   cout << "The front of the queue is " << q.front() << endl;
   q.push(2);
   cout << "The front of the queue is " << q.front() << endl;
   cout << "The back of the queue is " << q.back() << endl;
   cout << "size of the queue is " << q.size() << endl;
   q.pop();
   cout << "size of the queue is " << q.size() << endl;

   if (q.empty())
   {
      cout << "queue is empty" << endl;
   }
   else
   {
      cout << "queue is not empty" << endl;
   }
}