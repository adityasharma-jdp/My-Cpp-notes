#include<iostream>
using namespces std;
int main(){
    int a;
    cout<<"enter the fisrt number "<<endl;
    cin>>a;
     int b;
    cout<<"enter the second number "<<endl;
    cin>>b;
    char op;
    cout<<"enter the opration "<<endl;
    cin>>op;
    if(op=='+') cout<<a+b;
    else if(op=='-') cout<<a-b;
    else if(op=='*') cout<<a*b;
    else if(op=='/') cout<<a/b;
    else if(op=='%') cout<<a%b;
    else cout<<"wrong opretion is enterrd by yourself";
}