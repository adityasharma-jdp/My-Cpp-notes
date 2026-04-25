//in c++ there are two categories of type conversion:
// a-> Bacis to Class type conversion(DONE IMPLICITLY BY COMPILER OR EXPLICITLY BY PROGRAMMER)
// b-> Class type to basic type conversion
//c-> Class type to class type conversion

#include<iostream>
using namespace std;
class number{
    int data;
    public:
    number(int d){
        data=d;
    }
    void display(){
        cout<<"the value of data is : "<<data<<endl;
    }

};

int main(){
number n1;   // basic to class type conversion
n1=10;  // this is possible because of constructor which takes int as argument
n1.display();
}
