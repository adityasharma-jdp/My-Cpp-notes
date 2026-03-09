//auto keyword as while declearig any varrible as data type it autonmTIcaly reduses
// the type from the expressiomn or v;lue given at the time of declareation
//ek baarjo dat type hogya to baaafd me change nhi kiya ja satkta hai auto keyword use karne ke baad
//auto keyword and auto variable;
// as we know c+++ strongly typedd language it mean that datatype of varrible can not be changed afyter the firast decleration 


#include<iostream>
using namespace std;
int main(){
    auto a=5;
    cout<<a<<endl;
    a=7.5;
    cout<<"after the change data type  "<<endl<<a<<endl;
    auto ch='r';
    cout<<ch<<endl;
    ch=100;
    cout<<ch<<endl;
    return 0;

    

}