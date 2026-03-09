//range based for loop
// syntax
// for(data type variable: itreble objec){
//     //code here
// }
#include<iostream>
using namespace std;
int main(){
    int a[5]={1,23,4,5,6};
    // for(int i=0;i<5;i++){
    //     a[i]=a[i]+5;
    // by usinfg range based for loop
    
    for(int& e:a){ //direct likhne e nhihoga refrencing ka use kan apadega yha pe 
        e=e+5;
    }
for(int e: a){
    cout<<e<<endl;
}
}