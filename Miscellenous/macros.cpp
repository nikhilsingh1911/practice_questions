// #include <iostream>
// using namespace std;
// // Defining a macro here
// #define PI 3.14

// int main()
// {
//     int radius = 5;
//     // used the above defined macro here..
//     double area = PI * radius * radius;

//     cout << " Area is " << area << endl;
// }

#include <iostream>
using namespace std;

// global variable
int globalVar = 10;
void a(int i)
{
    cout << i << endl;
}
int main()
{

    int i = 9;
    a(i);


    return 0;
}