// in this problem we try to rotate a matrix..
// 1  2  3         7  4  1
// 4  5  6   ->    8  5  2
// 7  8  9         9  6  3

// rotation function didn't worked here!!!!!!

// Question-> Given a sqaure matrix, trun it by 90 degrees in a clockwise direction without using any extra space...
#include <iostream>
#include <vector>
using namespace std;

void rotate_vec(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            swap(v[i][j], v[i][j]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
}

int main()
{
    int n, m;
    cout << "Enter the row of Matrix: ";
    cin >> n;
    cout << "Enter the column of Matrix: ";
    cin >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    cout << "Enter the elements of vector: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout << "This shows the Transpose of the matrix" << endl;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    rotate_vec(vec);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}