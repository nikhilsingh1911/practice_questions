#include <iostream>
using namespace std;

class Hero
{
    int health;

public:
    Hero()
    {
        cout << "Constructer Created" << endl;
    }

    Hero(int herp)
    {
        cout<<"this-> "<<this<<endl;
        this->health = herp;
        cout <<"health is: "<< health << endl;
    }
};

int main()
{

    Hero h1(50);

    cout<<"H1 is: "<<&h1;

    Hero *h2 = new Hero;
    
}