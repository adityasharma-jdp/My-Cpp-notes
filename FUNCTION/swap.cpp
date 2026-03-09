// USING POINTERS METHOD
#include<iostream>
using namespace std;
void swap(int &a ,int &b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a=6; int b=5;
    
    swap(a,b);
    cout<<"valueof a and b respectively after sawp "<<a<<"& "<<b;
}