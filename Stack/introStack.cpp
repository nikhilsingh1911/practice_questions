// Stacks
// Stack follows Last In First Out(LIFO).
#include <iostream>
#include <stack>
using namespace std;
// implementation of stack..(Not STL)

//
//
// Stack implementation using Linked list
class Stack
{
public:
   int top;
   int *arr;
   int size;

   Stack(int size)
   {
      this->size = size;
      // creating a array dynamically.
      arr = new int(size);
      top = -1;
   }

   void push(int d)
   {
      if (size - top > 1)
      {
         top++;
         arr[top] = d;
      }
      else
      {
         cout << "Stack Overflow" << endl;
      }
   }

   void pop()
   {
      if (top >= 0)
      {
         top--;
      }
      else
      {
         cout << "Stack UnderFlow" << endl;
      }
   }

   int peek()
   {
      if (top >= 0)
      {
         return arr[top];
      }
      else
      {
         cout << "Stack is empty" << endl;
         return -1;
      }
   }

   bool empty()
   {
      if (top == -1)
      {
         return true;
      }
      return false;
   }
};

int main()
{

   Stack st(5);
   st.push(3);
   st.push(4);
   st.push(6);
   st.push(7);
   st.push(8);
   // st.push(9);

   cout << "Printing top of stack " << st.peek() << endl;

   st.pop();
   cout << "Printing top of stack " << st.peek() << endl;
   st.pop();
   cout << "Printing top of stack " << st.peek() << endl;
   st.pop();
   st.pop();
   st.pop();
   cout << "Is Stack Empty " << st.empty() << endl;
   cout << endl
        << endl;

   cout << "Stack used by STL" << endl;
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);

   cout << s.top() << endl;
   // s.pop();
   // s.pop();
   // s.pop();
   cout << s.top() << endl;
   if (s.empty())
   {
      cout << "Stack is empty" << endl;
   }
   else
   {
      cout << "Stack is Not empty" << endl;
   }

   cout << "Size is : " << s.size() << endl;
}