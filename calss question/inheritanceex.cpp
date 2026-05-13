// #include<iostream>
// using namespace std;
// class animal{
// public:
// void display1(){
// cout<<"this is animal class"<<endl;

// }
// };
// class dog : public animal{

// public:
// void display2(){
//     cout<<"this is dog class "<<endl;

// }

// };



// int main(){
// animal a1;
// dog d1;
// a1.display1();
// d1.

// }

#include<iostream>
using namespace std;

    class parent{
public:
void display(){
cout<<"this is parent class "<<endl;


}
    };

class child : public parent{
public:
void display(){
cout<<"this is child class "<<endl;

}
};

int main(){
parent p1;
child c1;
p1.display();
c1.display();
return 0;
}

























