#include <iostream>
using namespace std;

// Run time Polymorphism
//  Also known as Dynamic Polymorphism..
class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog: public Animal{
    public:
    void speak(){// this is also function overriding.
        cout<<"Barking"<<endl;
    }
};

int main()
{
    Dog obj;
    obj.speak();
    return 0;
}