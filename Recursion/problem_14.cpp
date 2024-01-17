// Reverse a string  using Recursion

/*
#include <iostream>
using namespace std;

void reverseString(string str, int index, int last)
{
    if (index >last){
        return ;
    }

    cout<<str[last];
    reverseString(str, index, last-1);
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int index = 0;
    int last = str.size();
    reverseString(str, index, last);
}

*/

//Check if a string is palindrome or not


#include<iostream>
using namespace std;

bool checkPalindrom(string str, int first, int last){
    if(first>last){
        return true;
    }
    if(str[first]==str[last]){
        return checkPalindrom(str, first+1, last-1);
    }else{
        return 0;
    }
    return 0;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int first = 0;
    int last = str.size()-1;
    if(checkPalindrom(str, first, last)){
        cout<<"String is palindrome";
    }else{
        cout<<"String is not palindrome";
    }
}