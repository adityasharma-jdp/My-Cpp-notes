// refreance varriables
#include<iostream>
using namespace std;

int a = 10;

int* fun(){
    return &a;
}

int main(){
    int *p = fun();
    *p = 20;
    cout << a;
}
