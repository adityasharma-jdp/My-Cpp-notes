#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"this is parent class constructor"<<endl;

    }
virtual ~parent(){
        cout<<"this is parent class destructor"<<endl;

    }   

};
class child : public parent{
    public:
    child(){
        cout<<"this is child class constructor"<<endl;  
    }
~child(){
        cout<<"this is child class destructor"<<endl;  
    }
};
int main(){
    parent *p=new child(); //upcasting
    delete p;

}
// Whenever we create a child class object using a parent class pointer then while deleting the object using pointer the destructor of the parent class will be callled and memory leakeg
//                then we need virtual destructor in paren class which ensure proper calliong of destructor.