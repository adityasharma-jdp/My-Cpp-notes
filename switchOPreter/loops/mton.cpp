#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
int a=0;
for(int i=2;i<=n;i++){
if(n%i==0){
    cout<<"number is composite";
    int a=1;
    break;
}


}
if(a==0) cout<<"number is prime";
else

}