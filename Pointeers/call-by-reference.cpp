/*
    Call by Reference



#include<iostream>
using namespace std;

int swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    // return (x,y);
}
int main(){
    int x = 9;
    int y = 10;
    int *ptr1;
    int *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    swap(ptr1, ptr2);
    cout<<"X is: "<<x<<"\n Y is: "<<y;
}

*/

// To first and last oocurrence of a character in a string using Call by Reference
#include <iostream>
// #include<string>
using namespace std;
void findFirstandLast(string s,char ch, int *first, int *last)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            *first = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ch)
        {
            *last = i;
            break;
        }
    }
}
using namespace std;
int main()
{
    string s = "fgbaaccrsdafrt";
    char ch = 'a';
    int first = -1;
    int last = -1;
    int *ptrf = &first;
    int *ptrl = &last;
    findFirstandLast(s, ch, ptrf, ptrl);
    cout << *ptrf << endl
         << *ptrl;
}