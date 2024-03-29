// Converting the number into its binary form..

#include <iostream>
#include<algorithm>
using namespace std;

string convert2binary(int n)
{
    string res = "";
    while (n >= 1){
        if(n%2==1){
            res += '1';
        }
        else{
            res += '0';
        }
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int n;
    cout << "Enter the number you want to convert into binary: " << endl;
    cin >> n;
    string s = convert2binary(n);
    cout << "After converting the number " << n << " into binary the result is = " << s;
}