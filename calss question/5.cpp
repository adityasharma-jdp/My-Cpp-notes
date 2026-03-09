//inline functions
// inline functionare functions whose defination is provided at the calling location of function 

//inline function is a requet to compiler to make function inline and it

#include<iostream>
using namespace std;

inline int sum(int a int b){

    return a+b;
}
int main(){
    int s1=sum(5,9);
    int s2=sum(10,5);
     int s3=sum(3,9);
      int s4=sum(7,8);
      cout<<s1<<s2<<s3<<s4;
}