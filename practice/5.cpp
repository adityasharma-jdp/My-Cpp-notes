#include<iostream>
using namespace std;
int odd(int x,int y){
    for(int i=x;i<=y;i++){
        if((i%2)!=0) cout<<i<<" ";
    }
    
}
int main(){
int x,y;
cin>>x>>y;
odd(x,y);
}