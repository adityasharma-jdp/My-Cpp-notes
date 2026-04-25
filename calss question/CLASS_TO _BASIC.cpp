#include<iostream>
using namespace std;
class number{
int data;
public:
number(int d){
    data=d;
}
operator int(){
    return data;
}

};


int main(){
number n1(25);
int a;
a=n1;
cout<<a;
}