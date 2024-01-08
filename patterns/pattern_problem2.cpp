/*
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
      this pattern
*/
#include <iostream>
#include <vector>
using namespace std;

void emptyBoxPattern(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (i == 1 || i == size || j == 1  || j == size)
            {
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int rowsize;
    cout << "Enter the row size: ";
    cin >> rowsize;
    emptyBoxPattern(rowsize);
}