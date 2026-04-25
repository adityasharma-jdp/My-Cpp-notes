//Dimond problem
// WAP to make a base class and its two child class named as parent1 and parent2 and they both act as a parent class of child class 
// now create an object of child class and try to call a function of base class 
#include<iostream>
using namespace std;

class base{
public:
    void display(){
        cout<<"this is the base class"<<endl;
    }
};

class parent1 : virtual public base{
public:
    void display(){
        cout<<"this is parent 1 class"<<endl;
    }
};

class parent2 : virtual public base{
public:
    void display(){
        cout<<"this is parent 2 class"<<endl;
    }
};

class child: public parent1 , public parent2{
public:
    void display(){
        base::display();   // base ka function call
    }
};

int main(){
    child c1;
    c1.display();   // no ambiguity now
}
// the child class will have the two copies members of base class andits create ambiguity while calling the base class members this problem is known as dimond problem
// to  solve he dimond problem we use the concept of virtuall base class which ensures that only single copy of base class members goes to child class having many parent clases which shares the common base class


//        base
//       /    \
//  parent1  parent2
  //     \    /
   //     child

  /* Diamond inheritance is used when multiple classes share a common base, and virtual inheritance ensures only one shared instance 
  of the base class to avoid duplication and ambiguity*/