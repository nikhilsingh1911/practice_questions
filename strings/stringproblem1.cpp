/*
    Given a string str, sorth the given string.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1 = "Nikhil";
    int size = str1.size();
    // for(int i=0;i<size-1;i++){
    //     char temp;
    //     if(str1[i]>str1[i+1]){
    //         temp = str1[i+1];
    //         str1[i+1] = str1[i];
    //         str1[i] = temp;
    //     }
    // }
    sort(str1.begin(), str1.end());
    cout << str1;
}