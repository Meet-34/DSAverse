// This includes all the libraries that are present in C++
#include <bits/stdc++.h>
using namespace std;

int main(){
    //Pairs

    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int,int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    //Array of elements in pairs 
    pair<int, int> pairArray[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Pair of elements at index 0: " << pairArray[0].first << " " << pairArray[0].second << endl;
    cout << "Pair of elements at index 2: " << pairArray[2].first << " " << pairArray[2].second << endl;

    //Vectors - cointainer that is used to store values, dynamic in nature 

    vector <int> v;
    v.push_back(1);
    v.push_back(5);
    v.emplace_back(0);
    v.emplace_back(2);
    /*emplace_back is similar to push_back but faster in nature. Why? 
    Because it directly constructs the object into the container avoiding extra copies/moves. */

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);
    //Syntax diff in push_back and emplace_back. We directly provide the elements using the latter one and it automatically consider it as a pair

    vector<int> v2(5);
    //A vector with size - 5 is declared

    vector<int>v3(6, 100);
    /*A vector with size - 6 is declared and initialized with every element being 100 
    Even if the size of vector is predefined, it can always be increased later. Remember - vector is dynamic in nature */

    v3.push_back(200);

    vector<int>v4(v3);
    //Copying vector v3 directly to a new vector v4

    cout << v[1] << endl;

    //Iterator points to the beginning of the vector 
    vector<int>::iterator it = v.begin();

    it++;
    //now the iterator points to the memory address of second element stored in the vector 
    cout << "Element at pos 2: " << *(it) << endl;
    it = it + 2;
    cout << "Element at pos 4: " << *(it) << endl;

    cout << "Last element in the vector v: " << v.back() << endl;

    





}


