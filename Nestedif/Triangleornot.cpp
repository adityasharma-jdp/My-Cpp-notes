#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of 1st side=";
    cin>>a;
     cout<<"enter the value of 2nd side=";
    cin>>b;
     cout<<"enter the value of 3rd side=";
    cin>>c;
    if((a+b)>c&&(b+c)>a&&(c+a)>b){
        cout<<"the given sides makes a perfect triangle";
    }
    else{
        cout<<"the given sides not makes a perfect triangle";
    }
}
