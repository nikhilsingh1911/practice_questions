#include <iostream>
using namespace std;
int main()
{
    int r1, r2, c1, c2, a[5][5], b[5][5];
    int i, j;
    cout << "Enter the size of row of first matrix: ";
    cin >> r1;
    cout << "Enter the size of column of first matrix: ";
    cin >> c1;
    cout << "enter the elements of matrix A: ";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the size of row of second matrix: ";
    cin >> r2;
    cout << "Enter the size of column of second matrix: ";
    cin >> c2;
    cout << "enter the elements of matrix A: ";
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    int c[5][5];
    for (i = 0; i < r1; i++)
    {
        int value = 0;
        for (j = 0; j < c2; j++)
        {
            for (int k = 0; k < r1; k++)
            {
                value += a[i][k] * b[k][j];
            }
            c[i][j] = value;
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}