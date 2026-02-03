// This includes all the libraries that are present in C++
#include <bits/stdc++.h>
using namespace std;

int main(){
    //!Pairs
    cout << "Pairs: " << endl;
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int,int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    //Array of elements in pairs 
    pair<int, int> pairArray[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Pair of elements at index 0: " << pairArray[0].first << " " << pairArray[0].second << endl;
    cout << "Pair of elements at index 2: " << pairArray[2].first << " " << pairArray[2].second << endl;

    //!Vectors - cointainer that is used to store values, dynamic in nature 

    cout << "Vector: " << endl;
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

    for(vector<int>::iterator i = v.begin(); i != v.end(); i++){
        cout << *(i) << " ";
    }
    cout << endl;

    //auto keyword automatically assigns the dataType
    for(auto i2 = v.begin(); i2 != v.end(); i2++){
        cout << *(i2) << " ";
    }
    cout << endl;

    //for each Loop
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;

    //->Erase function
    v.erase(v.begin() + 1);
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;

    v.erase(v.begin() + 2, v.begin() + 3);
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;

    v.push_back(8);
    v.push_back(15);
    v.push_back(85);
    v.push_back(23);
    v.push_back(35);
    v.push_back(76);

    //->Insert function
    vector<int>v5(2, 100);
    v5.insert(v5.begin(), 200);
    v5.insert(v5.begin() + 1, 2, 10);
    for(auto x: v5){
        cout << x << " ";
    }
    cout << endl;

    vector<int>copy(2, 26);
    v5.insert(v5.begin(), copy.begin(), copy.end());
    for(auto x: v5){
        cout << x << " ";
    }
    cout << endl;

    cout << "Size of vector v5: " << v5.size() << endl;

    v5.pop_back();
    for(auto x: v5){
        cout << x << " ";
    }
    cout << endl;

    v.swap(v5);
    for(auto x: v5){
        cout << x << " ";
    }
    cout << endl;

    cout << v.empty() << endl;
    
    //Used to erase the entire vector
    v.clear();

    cout << v.empty() << endl;

    //! List

    cout << "List: " << endl;
    list<int>l;
    l.push_back(5);
    l.emplace_back(8);
    l.push_front(11);
    l.emplace_front(78);

    for(auto x: l){
        cout << x << " ";
    }
    cout << endl;
    /*Rest all the functions of a list are same as vector
    ->begin, end, rbegin, rend, clear, insert, size and swap */

    //! Deque 

    cout << "Deque: " << endl;
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(19);
    dq.push_front(46);
    dq.emplace_front(14);
    for(auto x: dq){
        cout << x << " ";
    }
    cout << endl;

    dq.pop_back();
    dq.pop_front();
    for(auto x: dq){
        cout << x << " ";
    }
    cout << endl;
    
    cout << dq.back() << endl;
    cout << dq.front() << endl;
    /*Rest all the functions of deque are same as vector
    ->begin, end, rbegin, rend, clear, insert, size and swap */

    //! Stack

    cout << "Stack: " << endl;
    stack<int>s;
    s.push(45);
    s.emplace(11);
    s.push(16);
    s.emplace(78);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << s.size() << endl;
    cout << s.empty() << endl;

    stack<int>s2;
    s2.swap(s); 

    cout << s2.top() << endl;

    //! Queue

    cout << "Queue: " << endl;
    queue<int>q;
    q.push(11);
    q.emplace(5);
    q.push(9);
    q.emplace(16);

    cout << q.back() << endl;

    q.back() += 2;
    cout << q.back() << endl;

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
//size, swap, empty functions are same as stack

    //! Priority Queue - Stores the elements in descending order

    cout << "Priority Queue: " << endl;
    priority_queue<int>pq;
    pq.push(5);
    pq.push(85);
    pq.push(2);
    pq.emplace(99);
    pq.emplace(61);
    pq.emplace(4);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
//size, swap, empty functions are same as stack

    //? Minimum Heap
    
    cout << "Minimum Heap: " << endl;
    priority_queue<int, vector<int>, greater<int>>pp;
    pp.push(5);
    pp.push(85);
    pp.push(2);
    pp.emplace(99);
    pp.emplace(61);
    pp.emplace(4);

    cout << pp.top() << endl;
    pp.pop();
    cout << pp.top() << endl;
    
    //Time complexities, push & pop -> O(log n) and top -> O(1)

    //! Set - stores everything in sorted order & unique 

    cout << "Set: " << endl;
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.emplace(3);
    st.emplace(7);
    st.emplace(11);
    st.emplace(13);
    st.insert(15);
    st.emplace(16);
    st.insert(2);              //This won't insert 2 again as every element in a set is unique 
    //The functionality of insert as in vector can also be used but it just increases the efficiency
    //begin(), end(), rend(), rbegin(), size(), swap(), empty() work the same way as above

    auto it7 = st.find(3);
    //iterator points to the location of 3

    auto it8 = st.find(6);
    //As there is no element '6' in the container therefore, the iterator will point 

    st.erase(2);
    //deletes 2 and maintains the sorted order
    for(auto x: st){
        cout << x << " ";
    }
    cout << endl;

    int cnt = st.count(4);
    cout << cnt << endl;
    //Can give 0 or 1, as there is only one single occurence of one element. 0 means element doesn't exist and vice versa

    auto it3 = st.find(11);
    st.erase(it3);                   // It takes constant time
    for(auto x: st){
        cout << x << " ";
    }
    cout << endl;

    auto it1 = st.find(7);
    auto it2 = st.find(16);
    st.erase(it1, it2);
    //used to erase everything in between 7(Inclusive) and 16(exclusive) [7, 16)
    for(auto x: st){
        cout << x << " ";
    }
    cout << endl;

    auto it5 = st.lower_bound(2);
    cout << *it5 << endl;

    auto it11 = st.upper_bound(14);
    cout << *it11 << endl;

    //!Multiset - stores the elements in sorted order, but not unique(as in set)

    multiset<int>ms;
    //Stores all the 1's and 2's (repeating elements as well)
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    //{1, 1, 1, 2, 2, 3}

    int count = ms.count(2);
    //Counts the no. of occurences of 2

    //Erases all the occurences of 1
    ms.erase(1);
    
    //To erase a single 1, not all
    ms.erase(ms.find(1));




}


