#include <iostream>
#include <set>
using namespace std;

// set store unique element only..
// element will be returned in sorted order

int main()
{

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(9);
    s.insert(9);
    s.insert(6);
    s.insert(9);

    // time complexity of insertion in set is O(logn).
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << "After erase 1" << endl;
    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << endl;
    }

    // to delete at some position
    cout << "After erase 2" << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }
}