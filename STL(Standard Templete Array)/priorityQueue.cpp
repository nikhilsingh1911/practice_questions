#include <iostream>
#include <queue>
using namespace std;
// default priority queue is max heap.
// the first element of the priority queue is always greatest.

int main()
{
    // this one is based on max heap
    priority_queue<int> max;

    // this one is based on min heap
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(1);
    max.push(3);
    max.push(5);
    max.push(2);
    int i = max.size();
    for (int j = 0; j < i; j++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    min.push(1);
    min.push(3);
    min.push(5);
    min.push(2);
    int j = min.size();
    for (int k = 0; k < j; k++)
    {
        cout << min.top() << " ";
        min.pop();
    }

    // to get the size in priority queue we use .size() method 
    // to check the queue is empty or not  .empty() method is used.
}