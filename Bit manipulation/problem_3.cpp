//learning about differents operation like and, or, xor, shift & not

#include<iostream>
using namespace std; 


int main(){
    int a, b ;
    a = 13;
    b = 11;
    int c = a&b;
    cout<<"Used AND operator here "<< c <<endl;
    int d = a|b;
    cout<<"Used OR operator here "<< d <<endl;
    int e = a^b;
    cout<<"Used XOR operator here "<< e <<endl;
    int f = a<<2;// means the number stored in a is left shifted by two places like here a store 13(00001101) after shifting
    // it will become 00110100(52) left shift a gives result in this form if we are use like a<<b  then the ans will be a*2^b;
    //i.e 13 * 2^2 = 52!!!!!
    cout<<"Used LEFT SHIFT operator here "<< f <<endl;
    int g = a>>2;// means the number stored in a is right shifted by two places like here a store 13(00001101) after shifting
    // it will become 00000011(3)
    cout<<"Used RIGHT SHIFT operator here "<< g <<endl;
    int h = ~a;
    //this we have used the not operator or complement operator
    cout<<"Used NOT operator here "<<h<<endl;
    
}