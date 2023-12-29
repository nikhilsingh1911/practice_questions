// Given a postive integter n, generate an n*n matrix filled with elements from 1 to n**2 in spiral order...

#include <iostream>
#include <vector>
using namespace std;

void spiral_matrix(vector<vector<int>> &vec)
{
    int top, right, left, bottom;
    int vec_size = vec.size();
    top = 0;
    left = 0;
    right = vec_size - 1;
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
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                cout << vec[row][right] << " ";
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << vec[bottom][col] << " ";
            }
            bottom--;
        }
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                cout << vec[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

int main()
{
    int row_size, col_size;
    cout << "Enter the size of row: " << endl;
    cin >> row_size;
    vector<vector<int>> matrix(row_size, vector<int>(row_size));
    int n = 1;
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < row_size; j++)
        {
            matrix[i][j] = n;
            n++;
        }
    }
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < row_size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    spiral_matrix(matrix);
}


