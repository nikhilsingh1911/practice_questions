// to count the no. of elements greater than x...
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect(6);
    int n = vect.size();
    cout<<"Enter the elements of Vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    int count = 0;
    int x;
    cout << "Enter X: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (vect[i] > x)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "No element is greater than " << x << endl;
    }
    else
    {
        cout << "The number of elements greater than " << x << " is " << count;
    }
}