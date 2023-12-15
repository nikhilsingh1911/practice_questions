#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec(6);
    int n = vec.size();
    cout << "Enter the elements of vector ";
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int element;
    int position = -1;
    cout << "Enter the element of which you want to check the occurence: ";
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == element)
        {
            position = i;
        }
    }
    if (position == -1)
    {
        cout << "Enterd element was not there!";
    }
    else
    {
        cout << "Last occurence of the enterd element " << element << " is " << position<<endl;
    }
    int count;
    cout << "Enter the element of which you want to check the no. of occurence: ";
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == element)
        {
            count = i+1;
        }
    }
    cout<<count;
    return 0;
}