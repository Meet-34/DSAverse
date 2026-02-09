//! Recursion - When a function calls itself until a base condition is met

#include <iostream>
using namespace std;

void print(int i, int n){
    if(i>n) return;
    cout << "lily" << " ";
    print(i+1, n);
}

int main(){
    int n;
    cin >> n;
    print(1, n);
}