#include <bits/stdc++.h>
using namespace std;

int main()
{
   // most of time recommend to use unordered_map and if TLE(Time Limit exceeded) happens than switch to map.
   string s = "hellonikhil";
   // time complexity of unordered_map in average case(best case, average case) is O(1). for storing and fetching...
   //  time compleixtyog unordered_mao is linear time for both storing and fetching.
   unordered_map<int, int> hash;
   // time complexity of map is logn
   // storing and fetching takes logn in all the cases
   map<char, int> map;
   for (int i = 0; i < s.size(); i++)
   {
      map[s[i]]++;
   }
   // sort(map.begin(), map.end());
   for (auto in : map)
   {
      cout << in.first << "->" << in.second << endl;
   }

   hash[1] = 0;
   hash[2] = 3;
   hash[3] = 19;
   hash[4] = 5;
   cout << "Unordered Map" << endl
        << endl
        << endl
        << endl;
   for (auto hsh : hash)
   {
      cout << hsh.first << " " << hsh.second << endl;
   }
}
// Method used for hashing
// Division Method
// Folding Method
// Mid Square Method

// Division method
/*
   to store the frequency of an element in hashmap the division method is one of the method used to map the element's frequency.

   the element is divided the size of the array in which they are being stored.
   // the reminder of division of element and array size is the index for the element where its frequency is stored.

   what is Collision?
   Collision is when the reminder of two or more elements is same and now there is ambiguity that which elements frequency is that.
   SOLLUTION for collision is that whenever a collision occurs it solved by links(linked list)
*/