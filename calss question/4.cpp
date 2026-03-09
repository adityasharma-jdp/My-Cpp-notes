// return by poointers
//  #include<iostream>
//  using namespace std;
//  int a;
//  int* fun(){
//     a=5;
//     return &a;
//  }
//  int main(){
//     int *b=fun();
//     cout<<*b<<endl;
//  }
#include<iostream>
 using namespace std;
 int a;
 int& fun(){
    a=5;
    return a;
 }
 int main(){
    int &b=fun();
    cout<<b<<endl;
 }