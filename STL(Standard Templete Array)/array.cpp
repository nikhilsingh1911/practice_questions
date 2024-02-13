#include <iostream>
#include <array>

using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4};

    for (int i = 0; i < a.size(); i++)
    {

        cout << a[i] << endl;
    }

    // to direct access at any index

    cout << "Element at 2nd index-> " << a.at(2) << endl;

    // to check empty or not

    cout << "Empty or not " << a.empty() << endl;

    cout << a.at(0) << endl;

    cout << "First Element: " << a.front() << endl;
    //.at function complexity is O(1)
    cout << "Last element: " << a.back() << endl;
}