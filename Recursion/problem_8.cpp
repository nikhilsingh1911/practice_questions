// Remove all the occurence of a character from a string using Recursion
// Here remove 'a' from the string
#include <iostream>
using namespace std;

string removeChar(string str, int idx, int n)
{
    if (idx == n)
    {
        return "";
    }

    return ((str[idx] == 'a') ? "" : str[idx]) + removeChar(str, idx + 1, n);
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int n = str.size();
    cout << removeChar(str, 0, n);
}