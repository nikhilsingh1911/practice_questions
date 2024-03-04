/// Reverse the words in string III

#include <iostream>
#include <vector>
#include<stack>
using namespace std;

string reverseTheword(string st)
{
    int s = 0;
    int l = st.size() - 1;
    while (s <= l)
    {
        swap(st[s], st[l]);
        s++, l--;
    }
    return st;
}

string reverseWords(string s)
{
    string z = "";
    stack<string> ring;
    for (int i = 0; i < s.size(); i++)
    {
        string word = "";
        int flag = 0;
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
            flag = 1;
        }
        if (flag == 1)
        {
            string newWord="";
            newWord = reverseTheword(word);
            z = z + newWord + " ";
        }
    }
    return z;
}

int main()
{
    string s = "Let's take the LeetCode contest";
    string k = reverseWords(s);
    cout << k;
}