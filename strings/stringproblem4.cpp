/*
    Return maximum occuring character in an input string
*/

#include <iostream>
using namespace std;

char getMaxOccuredNumber(string s){
    int arr[26] = {0}; // by doing this we can asign the same value to every single index of the array. Like in this case Zero is assigned to every single index of the array..
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number = 0;
        if(ch>='a' && ch<='z'){
            number = ch-'a';
        }
        else{
            number = ch-'A';
        }
        arr[number]++;
    }
    int max = -1, ans =0;
    for(int i=0;i<26;i++){
        if(max < arr[i]){
            ans = i;
            max = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
} 

int main()
{
    string st;
    cout << "Enter the in string: ";
    getline(cin, st);
    cout<<"The string is: "<<endl;
    cout << st;
    char characters = getMaxOccuredNumber(st);
    cout<<endl;
    cout<<"The most occurring Character is: "<<characters;
}