#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the fisrt number ";
    cin>>a;
    char op;
    cout<<"enter the opration ";
    cin>>op;
     int b;
    cout<<"enter the second number ";
    cin>>b;
     
    if(op=='+') cout<<a+b;
    else if(op=='-') cout<<a-b<<" result";
    else if(op=='*') cout<<a*b<< " result";

    else if(op=='/') cout<<a/b<<" result";
    else if(op=='%') cout<<a%b<<" result";
    else cout<<"wrong opretion is enterrd by yourself";
}







