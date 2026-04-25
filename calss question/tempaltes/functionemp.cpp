// //Example of function template
// #include <iostream>
// using namespace std;
// template <typename T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     cout << add(5, 10) << endl; // Output: 15
//     cout << add(3.5, 2.5) << endl; // Output: 6
//     cout << add(string("Hello, "), string("World!")) << endl; // Output: Hello, World!
//     return 0;
// }
#include<iostream>
using namespace std;
template <typename T>
T add( T a, T b){
    return a+b;

}
int main(){
    cout<<add(5,10)<<endl;

}
