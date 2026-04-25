// constant data members==> constant data memebers are he data members whose values can not changed afetr intilization,
// we can only intiloze constant data members with constructor intilizer membeer list
#include<iostream>
using namespace std;
class person{
public:
const int x;
person(int a):x(a){      //person(int a):x(a) member list
    cout<<"object is creatd"<<endl;
}
void display(){
cout<<"value of x= "<<x<<endl;
}

};
int main(){
    person p1(12),p2(27),p3(90);/// alage alg p1,p2 ke liye hum alag alag value set kar rhae hai fir unk=he display kar rhe hai 
    p1.display();
    p2.display();
    p3.display();
}