/*
    String

    We can say that the strings are one dimensional char arrays.

    declaration:->
    char ch[10];  this is a character type array.

    to take input in char array->
    cin>>name;

    where the input end then there is a null
    character is used to check where the char array input ends.

    NULL CHARACTER is = '\0';
*/

#include <iostream>
#include <string>
using namespace std;

// int main(){
//     char chra[20];
//     cin>>chra;
//     cout<<"hii "<<chra;

//     char len = chra.length();
//     cout<<len;
// }

//  Reverse a string
void reverse(char name[], int lenght)
{
    int start = 0;
    int lst = lenght - 1;
    while (start < lst)
    {
        swap(name[start++], name[lst--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cin >> name;
    cout << "Hello " << name << endl;
    int len = getLength(name);
    reverse(name, len);

    cout << "Reverse string is: " << name << endl;
}