#include<iostream>
using namespace std;
void check(int n){
    try{
        if(n<0)
            throw n;
        
        cout<<"Number is positive"<<endl;
    }
    catch(int x){
      
        cout<<"inside function catch block"<<endl;
    throw x;
    }

}
int main(){
    try{
        check(-5);
    }
    catch(int x){
        cout<<"error is resolved by main function catch block"<<endl;
    }
    return 0;

}