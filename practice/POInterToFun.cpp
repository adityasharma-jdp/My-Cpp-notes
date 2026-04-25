#include<iostream>
using namespace std;
int Fun(int a,int b){
    int c=a+b;
    return c;
}
int main(){
int(*p)(int,int);
p=Fun; // yeh function ka adress use kiya jata hai jab bhi function ka name likha jarta hai 

cout<<p(5,9);
}
// the name of the function contains its address
