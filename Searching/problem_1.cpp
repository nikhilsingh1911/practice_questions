/*
    Given an array of integer 'a' that is sorted in non-decreasing order. Find the first and last position of the given 'target' element in the sorted array. Follow 0 based indexing.
    If 'target' is not found in the array return [-1, -1]
*/

#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector<int> vec, int target)
{
    int first = 0;
    int last = vec.size() - 1;
    int ans = -1;
    while (first <= last)
    {
        int mid;
        mid = first + (last - first) / 2;

        if (vec[mid] >= target)
        {
            ans = mid;
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return ans;
}
int upperbound(vector<int> vec, int target)
{
    int first = 0;
    int last = vec.size() - 1;
    int ans = -1;
    while (first <= last)
    {
        int mid;
        mid = first + (last - first) / 2;
        if (vec[mid] > target)
        {
            ans = mid;
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> vec;
    cout << "Enter the element of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int target;
    cout << "Enter the elemen of which you want to find first and last position: ";
    cin >> target;
    vector<int> reslt;
    int lb = lowerbound(vec, target);
    cout << "Lb is" << lb;
    if (vec[lb] != target)
    {
        reslt.push_back(-1);
        reslt.push_back(-1);
    }
    else
    {
        int ub = upperbound(vec, target);
        reslt.push_back(lb);
        reslt.push_back(ub - 1);
    }
    cout << "First occurence of the " << target << " is :" << reslt[0] << endl;
    cout << "Last occurence of the " << target << " is :" << reslt[1];
}