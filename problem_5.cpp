// pascal triangle
// but i failed to understand why there are 2 elements in first row..
// have to do in vectors also....


// this is also a way to do this and without have 2 one in first row.........
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cout << num << " ";
//         num = num * (i - k) / (k + 1);
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int fact(int n)
// {
//     int i = 1, fact = 1;
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         while (i <= n)
//         {
//             fact = fact * i;
//             i++;
//         }
//     }
//     return fact;
// }

// int pascal(int m, int n){
//     int value[10][10];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//            value[i][j] = fact(i)/(fact(j)*fact(i-j));
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(value[i][j]==0){
//                 continue;
//             }
//             else{
//             cout<<value[i][j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n, m;
//     cout << "Enter the row : ";
//     cin >> m;
//     cout<<"Enter the column: ";
//     cin>>n;
//     pascal(m, n);

//      always remeber to include vector header file whenever you are using vectors

// }
// or

#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascal_triangle(int n)
{
    vector<vector<int>> pascal(n);
    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i + 1);
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }
    return pascal;
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pascal_triangle(n);
    vector<vector<int>> v;
    v = pascal_triangle(n);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
