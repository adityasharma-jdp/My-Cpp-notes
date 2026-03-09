// *****static data members*******
// static data members of the class which are not reletedtoany object of classwhich are not related to any object of class memory to static data members get assigned whenever class
//is created , 
//static data members must be intilized outside class 
// class using scopre resolution opretor
// static data members are intilizing first and can be used by any object or without object also
#include<iostream>
using namespace std;
class student{
    public:
    static int x;
    int y;
    static int count;
    student(){
        count++;
    }

};




int student::count=0;    ///::===> is called scope resolution opretor
                      //intilization outsidethe class 

int main(){
    
    student s1,s2;// each object have 

s1.y=54;
s2.y=100;
// student::x=50;
// cout<<s1.y<<endl<<s2.y<<endl;
// cout<<s1.x<<endl<<s2.x<<endl;
// s1.x=90;
// s1.x=250;
// cout<<s1.x<<endl<<s2.x<<endl;
cout<<student::count<<"object is created";


}
///wap to count number of object  created for a class  
