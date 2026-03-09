#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;

}
int main(){
    int a,b;
    cout<<"enter the 1st number";
    cin>>a;
    cout<<"enter the 2nd number";
    cin>>b;
    cout<<sum(a,b);
}