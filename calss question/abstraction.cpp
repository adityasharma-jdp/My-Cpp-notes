// abstraction 
// abstraction is the procces of showing only essentials and hiding 
// Non essentials:
/*
for eg while driving any vehicle we just apply brakes with out knowinghow the bracking system is
 working internally like bycyle there is wired bracking y stem which is not cse of a car or aeroplane 
 

 in c++ abstraction is achived by using abstract classes.
 a class is known as abstract class if it has at least one pure virtual function.
 assiginging zero to virtual function deleartion make sit pure virtual function.
 

 Abstract class
 1. We cannot instantiate an abstract class. ie we cannot create an object of an abstract class.
 2.it is compulsury for every child class to define(implement) all pure virtual function of the parent class.
3 if any child is not defining all pure virtual function of the parent class then that child class also becomes an abstract class.





*/
#include<iostream>
using namespace std;
class vehicle{
   int  wheels;
   string brand;
    public:
    vehicle(int w,string b){
        wheels=w;
        brand=b;
    }
    virtual void breake()=0;// pure virtual function
    void display(){
        cout<<"brand: "<<brand<<endl;
        cout<<"wheels: "<<wheels<<endl;
    }

};
class car:public vehicle{
    public:
    car(int w,string b):vehicle(w,b){  // calling parent class constructor

    }
    void breake() override{
        cout<<"car is applying break"<<endl; // providing definition of pure virtual function
    }
};
int main(){
    // vehicle v1(4,"honda"); can not create instance of abstract class
    car c1(4,"honda");
    c1.display();
    c1.breake();

    return 0;
}