#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p1=&a;
    int *p2=p1;
    
    *p2=20;
    cout<<*p1<<" "<<*p2<<endl;
       
}
