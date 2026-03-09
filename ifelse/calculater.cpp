#include<iostream>
using namespace std;
int main(){
    // maual calcilater 
    int a,b;
    char op;
    cout<<"enter the problem";
    cin>>a>>op>>b;
    if(op=='+') cout<<a+b;
    if(op=='-') cout<<a-b;
    if(op=='*') cout<<a*b;
    if(op=='/') cout<<a/b;
}