#include<iostream>
using namespace std;
int counting(int n){
    int count=0;
    while(n>0){
        
        n=n/10;
        count++;
    }
     cout<<count;
    
}
int main(){
    int n;
    cin>>n;
    counting(n);
   
}