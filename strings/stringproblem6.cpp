// Reverse a word in string

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

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
            ring.push(word);
        }
    }
    while (!ring.empty())
    {
        string fina;
        fina = ring.top();
        ring.pop();
        if (!ring.empty())
        {
            z = z + fina + " ";
        }
        else
        {
            z = z + fina;
        }
        fina = "";
    }
    return z;
}

int main()
{
    string s = " the sky is    blue ";
    string k = reverseWords(s);
    cout << k<<endl;
}