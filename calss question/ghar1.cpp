#include<iostream>
using namespace std;
class vehicle{
    public:
    int speed;
    string name;
    vehicle(){
        cout<<"default constructor "<<endl;
    }
    void set(string s,int speed){
        this->speed=speed;
        name=s;
    }
    int retunspeed(){
        return speed;
    }
    void display(){
        cout<<name<<" :"<<speed<<endl;
    }
};
int main(){
vehicle v1;
vehicle *p;
p=&v1; // pointer to an object
p->set("maruti",120);
cout<<p->retunspeed();
}