// // Templates in C++
// //templates in c++ are used to use same functuon and class for different data types without rewriting the code for each data type.
// // 2.> they make the function and class more flexible and reusable.
// //3.>it avoid code duplication
// //4.> it forms the basics tor STL (standered  Templae library in c++)

// // #include<iostream>
// // using namespace std;

// // template<typename T,typename T2>
// // T sum(T a, T2 b){
// //     T c;
// //     c = a+b;
// //     return c;
// // }
// // int main(){
// //     float a=7.6;
// //     int b=9;
// //     float c= sum(a,b);
// //     cout<<c;
// // }
// #include<iostream>
// using namespace std;
// template<typename T1,typename T2>
// T1 add(T1 a, T2 b){
//     return a+b;
// }
// int main(){
//     int a=5,b=10.5;
//     cout<<add(a,b)<<endl;

// }


//*****Template class  */
#include<iostream>
using namespace std;

template<class T>

class Box
{
    T value;

public:

    // Constructor
    Box(T v)
    {
        value = v;
    }

    // Member Function
    T getValue()
    {
        return value;
    }
};

int main()
{
    // Integer Object
    Box<int> b1(20);

    // Float Object
    Box<float> b2(3.14);

    cout<<"Integer Value = "<<b1.getValue()<<endl;

    cout<<"Float Value = "<<b2.getValue();

    return 0;

    
}