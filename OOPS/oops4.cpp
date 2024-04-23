#include <iostream>
using namespace std;
/*
//Single Inheritance
class Animal
{
public:
    int age;
    int weight;

    public:
    void Speak(){
        cout<<"speaking"<<endl;
    }
};


class Dog: public Animal{

};

// Multilevel Inheritance
class Animal
{
public:
    int age;
    int weight;

public:
    void Speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
};

class Goldretriver : public Dog
{
};


// Multiple Inheritance
class Animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};
class Human
{
public:
    string color;
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class MultiInherit: public Animal, public Human{

};
*/
// Hierarchical Inheritance
class A
{
public:
    void func1()
    {
        cout << "FUNCTION 1" << endl;
    }
    void same()
    {
        cout<<"Function is Class A"<<endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "IN DErived Class B" << endl;
    }
    void same()
    {
        cout<<"Function is Class B"<<endl;
    }
};
class C : public A
{
public:
    void func3()
    {
        cout << "IN DErived Class C" << endl;
    }
    void same()
    {
        cout<<"Function is Class C"<<endl;
    }
};


// Hybrid Inheritance
//  when two or more different types of inheritance are used together then that inheritance is called Hybrid inheritance

// Inheritance Ambiguity
// Ambiguity is when different class have functions with same name then the complier get confused to that which function does user want to call so in that case it is known as Ambiguity
//  we can solve this abmiguity confusion by using scope resolution operator(::).
int main()
{
    /*
    // Single Inheritance
    Dog d1;
    d1.Speak();
    //Mutliple Inheritance
    Goldretriver g1;
    g1.Speak();
    // Multilevel Inheritance
    MultiInherit m1;
    m1.bark();
    m1.speak();
    */

    // Hierarchical Inheritance
    A obj1;
    obj1.func1();
    B obj2;
    obj2.func1();
    obj2.func2();
    C obj3;
    obj3.func1();
    obj3.func3();

    // Inheritance Ambiguity
    obj1.A::same();
    obj2.B::same();
    obj3.C::same();
    return 0;
}