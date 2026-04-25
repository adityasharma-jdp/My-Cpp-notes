#include<iostream>
using namespace std;
class animal{
protected:  // protected acces specifier hides the members to use use it from outside class, but they are accesible inside the chilsd class and friend 
void display1(){
cout<<"this is animal class"<<endl;

}
};

class dog : public animal{

public:
void display2(){
    display1(); // protected members are accesible un the hild class 
    cout<<"this is dog class "<<endl;

}

};



int main(){
animal a1;
dog d1;
// a1.display1();//protected members are not accesible inside the class

d1.display2();

}

// privvate access specifier ko child class ke ander use nhhi kar sakte hai

/*
** Type of  inheritance 
single inheritance: one base class , one child class
multilevel inheritance: one base class , one child class and child class also act s base clas  for anoter class


*/