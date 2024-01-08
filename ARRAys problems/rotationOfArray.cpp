/*
    Rotation of Array

    rotate the element of array

    [1, 2, 3, 4, 5, 6, 7, 8]
    rotate 3 times
    Ist rotation
    [8, 1, 2, 3, 4, 5 ,6 7]
    2nd rotation
    [7 ,8 ,1 , 2, 3, 4, 5, 6]
    3rd rotation
    [6, 7, 8, 1, 2, 3, 4 ,5]
*/

#include <iostream>
#include <vector>
using namespace std;

void rotationOfVector(vector<int> &vec, int rot)
{
    int size = vec.size();
    vector<int> v(size);

    for(int i=0;i<size;i++){
        v[(i+rot)%size] = vec[i];
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}
/*
void rotationOfVector(vector<int> vec, int rot)
{
    rot = rot % vec.size();
    reverse_iterator(vec.begin(), vec.begin() + (vec.size() - k));
    reverse_iterator(vec.begin() + (vec.size() - k), vec.end());
    reverse_iterator(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}
*/
int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    int rot;
    cout << "\nEnter the number of rotation you want to do:  ";
    cin >> rot;

    rotationOfVector(vec, rot);
}