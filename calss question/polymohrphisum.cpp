// it is the proccess of using  one thing in  multiple ways .

// Type of polymorphisum :
// 1. Compile Time Polymorphisum :
/*
a- it is consist of function(method) overloading and opretor overloading 
b- it also known as early binding orr static binding 

2. Run time polymohrphisum 
a- it consit of function(method ) overiding and virtual functions 
b- it si also known as late binding or dynamic binding.

virtual function is overriddable function means ifsame function 







*/




#include<iostream>
using namespace std;
class parent{
    public:
 virtual void diaplay(){
cout<<"parent class "<<endl;
    }


};
class child1:public parent{
public:
void diplay(){
    cout<<"this is child class"<<endl;

}
};
class child2:public parent{
    
};
int main(){
parent *p1=new child1();
parent *p2=new child2();
p1->diaplay();
p2->diaplay();




}


