#include<iostream>
using namespace std;
int a;
int* fun(){
    int a;
    a=5;
    return &a;

}
int main(){
    int *p=fun(); //dengling pointers
    cout<<*p;
    return 0;
}
