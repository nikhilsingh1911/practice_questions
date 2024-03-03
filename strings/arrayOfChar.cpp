#include <iostream>
using namespace std;
// whenever we passed the an array in function we have to include the length of the array as well but when we are talking about passing the array of character we don't need to pass the length of the array of the char
int getLengthChar(char name[])
{
    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

void reverseString(char name[], int length)
{

    int start = 0;
    int last = length - 1;
    while (start <= last)
    {
        swap(name[start], name[last]);
        start++, last--;
    }
}

int main()
{
    // char can store only one character.. to store more than one character we have to array of char.
    char name[10];

    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Your name is " << name << endl;
    int size = getLengthChar(name);
    cout << "The length of the char is : " << size << endl;
    reverseString(name, size);
    cout << "string after reverse is : " << name << endl ;
}