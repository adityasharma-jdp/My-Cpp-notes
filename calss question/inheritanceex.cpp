#include<iostream>
using namespace std;
class animal{
public:
void display1(){
cout<<"this is animal class"<<endl;

}
};
class dog : public animal{

public:
void display2(){
    cout<<"this is dog class "<<endl;

}

};



int main(){
animal a1;
dog d1;
a1.display1();
d1.display2();

}