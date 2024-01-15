// Replace space with @40
//
// i.e string = "My name is Nikhil Singh";
// output = "My@40name@40is@40Nikhil@40Singh"
//

#include <iostream>

using namespace std;

char replaceSpace(char ch)
{
    if (ch == ' ')
    {
        return 1;
    }
    return 0;
}

int main()
{
    string s;
    cout << "Enter you string here: " << endl;
    getline(cin, s);
    string s2 = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (replaceSpace(s[i]))
        {
            s2.push_back('@');
            s2.push_back('4');
            s2.push_back('0');
        }
        else
        {
            s2.push_back(s[i]);
        }
    }

    cout << "The String after replacement is :" << endl;
    cout << s2;
    return 0;
}