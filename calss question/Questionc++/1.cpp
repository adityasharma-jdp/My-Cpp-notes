// wap to create a child class with two parent class having two same named 
//functions now you are required to call that functin by resolving ambuguity
#include <iostream>
using namespace std;
class parent1{
    public:
    void display(){
        cout<<"this is parent1 class"<<endl;
    }
};
class parent2{
    public:
    void display(){
        cout<<"this is parent2 class"<<endl;
    }
};
class child:public parent1,public parent2{
    public:
    void display(){
        cout<<"this is child class"<<endl;
    }
};
int main(){
    child c;
   c.parent1::display();
}