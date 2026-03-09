//constructor are special member function do not have return type not have void
// constructor  should always be public
// whenever an objefct is created constrcture is automatically called
/*syntax:
class_name(){
// body constructor 
}
there are four type of constructor 
1.default constructor=which  donot have any parameter its own default constructor which is inbuild 
every clas  has which is inbuild if we defination of default cons. then defalut deination will be consideerd as default constructor

2.parameterrise constructor=whenever we provide parameter to our constructor then that constructor is known is parameterise constructor
3.


constructoroverloading=whenever we make more than one constructor by siffrencitig number or type of arguments
this procces is known as constructor overloading;;;;;;;;; 

*/
#include<iostream>
using namespace std;

    class student{ // constructor ki class always public hi  hi rehegi 
    
string name;
string course;
int roll;
public:
student(){
    cout<<"object is created "<<endl;
}
    };

int main(){
    student s1,s2,s3,s4;
}
// 👉 Constructor ek special member function hota hai
// 👉 Iska naam class ke naam jaisa hi hota hai
// 👉 Jab bhi object banta hai → constructor automatically call hota hai
// 👉 Iska koi return type nahi hota (void bhi nahi)