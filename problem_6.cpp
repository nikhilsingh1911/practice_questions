// to check the maximum number of highs(1) in a row
#include <iostream>
#include <vector>
using namespace std;

int maxhigh_row(vector<vector<int>> V)
{
    int max_no_in_all_row = INT8_MIN;
    int maxrow = -1;
    int column = V[0].size();
    int i;
    int max_row;
    for (i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            if (V[i][j] == 1)
            {
                maxrow = column - j;
            }
            if (maxrow > max_no_in_all_row)
            {
                max_no_in_all_row = maxrow;
                max_row = i;
            }
        }
    }
    cout << "Maximum number of high is in " << max_row << "th row";
}

int main()
{
    int n, m;
    cout << "Enter the row of the matrix: ";
    cin >> n;
    cout << "Enter the column of the matrix: ";
    cin >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Enter the element in vector" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    maxhigh_row(mat);
}