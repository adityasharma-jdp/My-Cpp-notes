// default arguments 
// 1.whenever we provide valueto a argumaent by any function than that argument knon as default argument
// 2.if its value comes by calling than that value is considerd and if its value is not provided by calling thn its defau;t value is considedrd
// 3.all the default arguments must be on right side in argument list 

// compiletion

#include<iostream>
using namespace std;
int sum(int a , int b=25){
    return a+b;

}
int main(){
    int a=5,b=10;
    int s=sum(a);
    cout<<s<<endl;
    
}

