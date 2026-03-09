#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the value of numbera";
    cin>>n;
    int factorial=1;

    for(int i=1;i<=n; i++){
        factorial*=i;
    }
    cout<<factorial;
    
}