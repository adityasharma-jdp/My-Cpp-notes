#include<iostream>
using namespace std;
int gcd(int x,int y){
    int hcf=1;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0) hcf=i;
    }
    return hcf;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y)<<" is GCD of Both the Numbers";
}
