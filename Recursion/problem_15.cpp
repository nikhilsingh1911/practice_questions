// Find the power of a number using recursion
#include<iostream>
using namespace std;
int numberPower(int number, int power){
    if(power==0)
    {
        return 0;
    }
    if(power==1){
        return number;
    }

    int ans = numberPower(number, power/2);
    if(power%2==0){
        return ans*ans;
    }
    else{
        return number*ans*ans;
    }
}
int main(){
    int number, power;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Enter the power: ";
    cin>>power;
    int ans = numberPower(number, power);
    cout<<ans;
}