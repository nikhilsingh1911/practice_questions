// Given an (n*m) matrix 'a', return all the elements of the matrix in spiral order..

#include <iostream>
#include <vector>
using namespace std;

void spiral_matrix(vector<vector<int>> &vec)
{
    int left, right, top, bottom;
    int vec_size = vec.size();
    left = 0;
    right = vec_size - 1;
    // because when we use .size()function it gives the the size that we have used as row size or matrix size here we used top...=0 so we have to decrease the size of right.....
    top = 0;
    bottom = vec_size - 1;
    int direction = 0;
    while (left <= right && top <= right)
    {
        // left to right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << vec[top][col] << " ";
            }
            top++;
        }
        // right to bottom
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                cout << vec[row][right] << " ";
            }
            right--;
        }
        // bottom right to left
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << vec[bottom][col] << " ";
            }
            bottom--;
        }
        // bottom to up
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                cout << vec[row][left] << " ";
            }
            left++;
        }
        // value of direction should not exceed the size of matrix.
        direction = (direction + 1) % 4;
    }
}
int main()
{
    int row_size, col_size;
    cout << "Enter the size of row of matrix: " << endl;
    cin >> row_size;
    cout << "Enter the size of column of matrix: " << endl;
    cin >> col_size;
    cout << "Enter the element of the Matrix: " << endl;
    vector<vector<int>> vect(row_size, vector<int>(col_size));
    for (int row = 0; row < row_size; row++)
    {
        for (int col = 0; col < col_size; col++)
        {
            cin >> vect[row][col];
        }
    }
    for (int row = 0; row < row_size; row++)
    {
        for (int col = 0; col < col_size; col++)
        {
            cout << vect[row][col] << " ";
        }
        cout << endl;
    }
    spiral_matrix(vect);
}