#include <iostream>
using namespace std;

// Encapsulation:-
// Advantages..
//  1 data hide means increase in security
//  2 if we want we can make class read only
//  3 Code reusability
//  4 Helps in Unit testing
/*
Ecapsultaion:-
    class Student
{
private:
    string name;
    int age;
    int height;
public:
    int getAge(){
        return this->age;
    }
};
*/

// Inheritance:-
/*

//This table is important to understand the concept of access modifiers in inheritance//

Base case member - Public - Protected - Private
access specifiers

1. Public        - Public - Protected - Private
2. Protected     - Protected - Protected - Private
3. Private       - Not inheritable - Not inheritable - Not inheritable  

*/
/*Syntax {
    class base{
        ..
        ..
    };
    here the derived class with inherit the property of the class named base...
    class derived: access specifier parent_class{
        ...
        ...
    };

}
*/
// Inheritance
class Human
{
public:
    int height;
    int age;
    int weight;

public:
    int geAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        return this->weight = w;
    }
};

// mode of inheritance 
// here the mode of inheritnace is public..
class Male : public Human
{
public:
    string Color;

    void sleep()
    {
        cout << "Sleeping male" << endl;
    }
};

int main()
{

    Male obj1;
    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;
    cout << obj1.Color << endl;
    obj1.sleep();
    // Student first;(Encapsulation Part..)
    obj1.setWeight(75);
    cout<<"Male weight is: "<<obj1.weight<<endl;
    cout << "HELL0" << endl;
}