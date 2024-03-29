// converting the binary form into its decimal form.
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std; 





// try solving using numbers(int type) approach is simple and will be done in 2mins




int convert2decimal(string s){
    reverse(s.begin(), s.end());
    int decimal = 0;
    for(int i = 0; i <= s.length()-1; i++){
        if(s[i]=='1'){
            decimal = decimal + pow(i, 2);
        }
        else if(s[i]=='0'){
            decimal += 0;
        }
    }
    return decimal;
}

int main(){
    string bin;
    cout<<"Enter the binary form which you want to convert into decimal form: ";
    cin>>bin;
    int res = convert2decimal(bin);
    cout<<"The number is: "<< res;
}