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
}


