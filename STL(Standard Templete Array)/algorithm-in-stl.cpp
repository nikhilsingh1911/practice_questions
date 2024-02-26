#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(10);
    cout<<"Finding 6 "<<binary_search(v.begin(), v.end(), 6)<<endl;
    // cout<<v[0];
    cout<<"TO get the lower bound: "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"TO get the upper bound: "<<upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;

    int a = 8;
    int b = 7;
    cout<<"max : "<<max(a, b)<<endl;
    cout<<"min : "<<min(a, b)<<endl;
    // to rotate the vector
    cout<<"After rotate the vector is : "<< endl;
    rotate(v.begin(), v.begin()+1, v.end());
    for(auto i: v){
        cout<<i<<" ";
    }

    // sort function is based on intro sort
    //intro sort is based on three sorting algorithm, quick sort, heap sort and insertion sort....

    return 0;
}