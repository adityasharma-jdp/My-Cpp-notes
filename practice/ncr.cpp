#include<iostream>
using namespace std;
int fact(int n){
   int fact=1;
    for(int i=0;i<n;i++){
        fact*=i;

    }
   return fact;
}
int main(){
    
    int n,r;
    cout<<"enter the value of n and r both";
    cin>>n>>r;
   int nfact=fact(n);
   int rfact=fact(r);
   int nrfact=fact(n-r);
   int ncr=nfact/rfact*nrfact;
cout<<"your ncr is this "<<" "<<ncr;
}