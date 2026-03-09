#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter the 1st number=";
cin>>a;
cout<<"enter the 2nd number=";
cin>>b;
cout<<"enter the 3rd number=10";
cin>>c;
if(a>b){
    if(a>c){
        cout<<a<<" is gretest";
    }
    else{
        cout<<c<<" is gretest";
    }
}
else{
    if(b>c){
        cout<<b<<" is gretest";
    }
    else{
        cout<<c<<" is gretest";
        
    }
}
}