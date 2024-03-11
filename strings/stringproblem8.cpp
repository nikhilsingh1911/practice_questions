// to get the maximum occurence of a char in the string..

#include <iostream>
using namespace std;

void maxOccurence(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int index = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            index = ch - 'a';
        }
        else
        {
            index = ch - 'A';
        }
        arr[index]++;
    }
    int Max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (Max < arr[i])
        {
            ans = i;
            Max = arr[i];
        }
    }
    char ch = 'a' + ans;
    cout << ch;
}

int main()
{
    string s;
    cout << "Enter the string:" << endl;
    // cin >> s;
    getline(cin, s);
    cout << s << endl;
    maxOccurence(s);
}