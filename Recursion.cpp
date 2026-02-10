//! Recursion - When a function calls itself until a base condition is met

//? Print name n times
// #include <iostream>
// using namespace std;

// void print(int i, int n){
//     if(i>n) return;
//     cout << "lily" << " ";
//     print(i+1, n);
// }

// int main(){
//     int n;
//     cin >> n;
//     print(1, n);
// }

//? Print linearly from 1 to n
// #include <iostream>
// using namespace std;

// void print(int i, int n){
//     if(i > n){
//         return;
//     }
//     cout << i << " ";
//     print(i+1, n);
// }

// int main(){
//     int n;
//     cin >> n;
//     print(1, n);
// }

//? Print from n to 1 
// #include <iostream>
// using namespace std;

// void print(int i, int n){
//     if(i < 1){
//         return;
//     }
//     cout << i << " ";
//     print(i-1, n);
// }

// int main(){
//     int n;
//     cin >> n;
//     print(n, 1);
// }

//? Print linearly from 1 to n(but by backtracking)
// #include <iostream>
// using namespace std;

// void print(int i, int n){
//     if(i < 1){
//         return;
//     }
//     print(i-1, n);
//     cout << i << " ";
// }

// int main(){
//     int n;
//     cin >> n;
//     print(n,n);
//     return 0;
// }

//? Print from n to 1(but by backtracking)
// #include <iostream>
// using namespace std;

// void print(int i, int n){
//     if(i > n){
//         return;
//     }
//     print(i+1, n);
//     cout << i << " ";
// }

// int main(){
//     int n;
//     cin >> n;
//     print(1,n);
//     return 0;
// }

//! Parameterized Recursion
// #include <iostream>
// using namespace std;

// void sum(int i, int total){
//     if(i < 1){
//         cout << total;
//         return;
//     }
//     sum(i-1, total+i);
// }

// int main(){
//     int n;
//     cin >> n;
//     sum(n, 0);
//     return 0;
// }

//! Functional Recursion - The problem is broken down in smaller parts
// #include <iostream>
// using namespace std;

// int sum(int n){
//     if(n == 0){
//         return 0;
//     }
//     return n + sum(n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     int total = sum(n);
//     cout << total;
//     return 0;
// }

//? Factorial of n
// #include <iostream>
// using namespace std;

// int fact(int n){
//     if((n == 0) || (n == 1)) return 1;
//     return n*fact(n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     int factorial = fact(n);
//     cout << factorial;
//     return 0;
// }