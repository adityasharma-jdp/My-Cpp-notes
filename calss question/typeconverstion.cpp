// Type Conversion in C++
//There are two types of type conversion in C++:
// 1. implicit type conversion : done by compiler itself.
// #include <iostream>
// using namespace std;
// int main(){
// int a='f';

// char ch;
// ch=105;
// cout<<a<<"  a"<<endl<<ch<<" ch"<<endl;


// }




//explicit type conversion : done by programmer itself.


#include <iostream>
using namespace std;
int main(){
int a=10;
float b=5.5;
cout<<"a : "<<a<<endl;


cout<<"b : "<<b<<endl;
cout<<"a+b : "<<a+b<<endl;
cout<<"a+b : "<<(float)a+b<<endl; //explict type conversion
cout<<"a+b : "<<a+(int)b<<endl;
}

