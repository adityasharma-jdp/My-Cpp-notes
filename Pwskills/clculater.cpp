#include<iostream>
using namespace std;
class calculater{
    public:
    int a,b;

    void add(){
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b<<endl;
    }
    void multiply(){
        cout<<a*b<<endl;
    }
    void division(){
        cout<<a/b;
    }



};

// clss to sirf blue prin humvaludenaunhe exess karna member functio ko call karna yeh hum object ke throughh karte hai
int main(){
    calculater cal;
    cal.a=10;
    cal.b=5;
    cal.add();
    cal.subtract();
    cal.multiply();
    cal.division();



}