#include <iostream>
// #incldue "Hero.cpp"
// this is used when you want to add the properties of other file in this file..
using namespace std;

// access Specifiers
// type: - (1) Public, (2) Private, (3) Protected

// PUBLIC:- all the properties after public can be accessed anywhere in the program..
// PRIVATE:- all the properties after public cannot be accessed outside the class or friend class of that class..
// PROTECTED:-

class Hero
{
private:
    int health;
    // we can't access this so we will use getert ans setter

public:
    Hero()
    {
        cout << "Constructor  Created" << endl;
    }

    // prorperties
    int value;
    char level;
    // to access these properpties we can access them by (.) operator

    int gethealth()
    {
        // accessed private member using getter and setter
        return health;
    }

    char getlevel()
    {
        // accessed private member using getter and setter
        return level;
    }

    void sethealth(int h)
    {
        // accessed private member using getter and setter
        health = h;
    }

    void setlevel(char ch)
    {
        // accessed private member using getter and setter
        level = ch;
    }
};

int main()
{
    // created A Hero Type Object
    Hero h1;
    h1.value = 69;
    h1.level = 'A';
    cout << "The value of value in Hero is: " << h1.value << endl;
    cout << "The value of level in Hero is: " << h1.level << endl;
    cout << "Size: " << sizeof(h1) << endl;
    // 1. output is 4 because the properties of class hero is value which is of int type and size of int is 4
    // 2. If the class do not have any properties in it then the size if 1

    h1.sethealth(81);
    cout << "Hero health is: " << h1.gethealth() << endl;

    // to create object dynamically
    Hero *h2 = new Hero;

    // when objected created dynamically the properties are acessed using (->).or (*objectName).value = val //......
    h2->value = 69;
    (*h2).level = 'c'; //(*objName) same as (->)..
    cout << "The value of value in Hero is: " << (*h2).value << endl;
    cout << "The value of level in Hero is: " << h2->level << endl;
}

// When an object is created a default constructor is created..it has no return type and no Input parameter.