#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // creating a vector
    //  vector is dynamic arrray..

    vector<int> v;
    // size shows the how much element are present in it..
    cout << "Size is: " << v.size() << endl;
    // vector doubles it quantity once it filled completely..
    cout << "Capacity is: " << v.capacity() << endl;

    // to insert a element at the end

    v.push_back(1);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.push_back(6);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;
    v.push_back(8);

    v.push_back(5);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.push_back(7);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.push_back(4);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.push_back(9);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;
    // to delete element form the last

    cout << "Before pop" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
    cout << "After Pop" << endl;

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
    // to empty the vector
    // size goes to zero after clear function
    // but the capacity remains same to pervious capacity before the use of clear function..

    v.clear();
    cout << "After Clear the size is:  " << v.size() << endl;
 
 
    cout << "After Clear the capacity is:  " << v.capacity() << endl;

    //to sort the vector
    // sort(v.begin(), v.end());


    // initializing the vector with same value;
    vector<int> a(5, 1);
    //this means the vector in initialized to a size of 5 and and every element is 1...

    for(int i:a){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}