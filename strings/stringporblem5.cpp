// Permutation in string
/*
    Given two strings s1 and s2, return true is s2 contains a permutation of s1, or false otherwise.
    In other words, return true if one of s1's permutations is the substrings of s2.

    s1 = "ab", s2="eidbaooo"
    output = true.
*/

#include <iostream>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}
bool checkInclusion(string s1, string s2)
{
    int count[26] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        int index = s1[i] - 'a';
        count[index]++;
    }
    int i = 0;
    int winsize = s1.size();
    int count2[26] = {0};
    while (i < winsize && i < s2.size())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count, count2))
    {
        return 1;
    }
    while (i < s2.size())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;
        char oldChar = s2[i - winsize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
        if (checkEqual(count, count2))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);

    int res = checkInclusion(str1, str2);
    if (res == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}