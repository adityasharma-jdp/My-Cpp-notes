#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int a=1;
    //1,3,5,7 ap ko print karwana hai to

    for(int i=1;i<=n;i++){

        cout<<a<<" ";
        a*=2;
    }
}