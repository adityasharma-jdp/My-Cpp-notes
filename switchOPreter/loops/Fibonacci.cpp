#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=0;
    int sum=0;
    for(int i=1;i<=n;i++){

    sum=a+b;
    a=b;
    b=sum;
    
    }
    cout<<a;
    //fibonacci number 1 1 2 3 5 8 13 
}