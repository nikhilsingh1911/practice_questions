//  Method 3: Prefix sum Over columns and rows Both.

// Given a matrix 'a' of dimension (n*m) and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1, r1) to (l2, r2).

#include <iostream>
#include <vector>
using namespace std;

int rectangeSum(vector<vector<int>> &vec)
{
    int sum = 0;
    int l1, l2, r1, r2;
    cout << "Enter l1 and r1: ";
    cin >> l1;
    cin >> r1;
    cout << "Enter l2 and r2: ";
    cin >> l2;
    cin >> r2;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 1; j < vec[0].size(); j++)
        {
            vec[i][j] += vec[i][j - 1];
        }
    }
    for (int i = 1; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[0].size(); j++)
        {
            vec[i][j] += vec[i-1][j];
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[0].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    int top_sum, left_sum, topleft_sum=0;
    if(l1!=0) top_sum = vec[l1-1][r2];
    if(r1!=0) left_sum = vec[l2][r1-1];
    if(l1!=0 && r1!=0) topleft_sum = vec[l1-1][r1-1];

    
    sum = vec[l2][r2] -top_sum - left_sum + topleft_sum;
    return sum;
}

int main()
{
    int rowSize, colSize;
    cout << "Enter the row size of the matrix: ";
    cin >> rowSize;
    cout << "Enter the col size of the matrix: ";
    cin >> colSize;
    vector<vector<int>> mat(rowSize, vector<int>(colSize));
    cout << "Enter the element of the matrix: ";
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cin >> mat[row][col];
        }
    }
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    int result = rectangeSum(mat);
    cout << "Sum is : " << result;
}