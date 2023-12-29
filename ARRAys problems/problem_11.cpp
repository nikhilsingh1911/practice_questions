//  Pattern: Prefix Sum in 2d array

// Given a matrix 'a' of dimension (n*m) and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1, r1) to (l2, r2).

#include <iostream>
#include <vector>
using namespace std;

int sum_matrix(vector<vector<int>> &vec)
{
    int l1, r1, l2, r2;
    cout << "Enter the index of row where you want to start: " << endl;
    cin >> l1;
    cout << "Enter the index of column where you want to start: " << endl;
    cin >> r1;
    cout << "Enter the index of row where you want to end: " << endl;
    cin >> l2;
    cout << "Enter the index of column where you want to end: " << endl;
    cin >> r2;
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += vec[i][j];
        }
    }
    return sum;
}

int main()
{
    int rowSize, colSize;
    cout << "Enter the size of the row of the matrix: " << endl;
    cin >> rowSize;
    cout << "Enter the size of the column of the matrix: " << endl;
    cin >> colSize;
    cout << "Enter the element of the matrix: ";
    vector<vector<int>> mat(rowSize, vector<int>(colSize));
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cin >> mat[row][col];
        }
    }
    cout << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << mat[row][col] << " ";
        }
        cout << endl;
    }
    int res = sum_matrix(mat);
    cout<<"Sum is: "<<res;
}