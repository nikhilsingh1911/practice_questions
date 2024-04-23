#include <iostream>
using namespace std;

// Polymorphism:- Existing in Multiple Forms..
// Type:- 1. Compile Time Polymorphism
// 2. Run Time Polymorphism

// Compiler Time Polymorphism also known as static polymorphism.
// Type:- 1. Function Overloading
// 2. Operator Overloading.
/*
class A
{
public:
    void SaySomething()
    {
        cout << "SAying Something" << endl;
    }

    void SaySomething(string name)
    {
        cout << "Name is " << name << endl;
    }
    int SaySomething(char name)
    {
        cout << "Name is " << endl;
        return 1;
    }
};
*/
// Operator Overloading
// Operators which cannot be overloading are given below:-
//(::)- scope resolution operator
//(.*)
//(.)-Dot
//(?:)
class B
{
public:
    int a;
    int b;
    int add()
    {
        return a + b;
    }
    void operator+ (B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;

    }
    void operator* (B &obj){
        int value1= this->a;
        int value2 = obj.a;
        cout<<"OUTPUT2 is: "<<value2/value1<<endl;
    }


};


int main()
{
    // Function Overloading
    //  A obj;
    //  obj.SaySomething();
    //  obj.SaySomething("Nikhil");

    // Operator Overloading
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 8;
    obj1 + obj2;
    obj1 * obj2;

}
