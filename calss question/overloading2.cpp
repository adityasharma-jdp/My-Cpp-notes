#include<iostream>
using namespace std;
int sum(int a,int b,int c){

    return a+b+c;
}
int sum(int a,int b){
    return a+b;
}
int main(){
int a=10,b=20,c=30;
cout<<sum(a,b,c)<<endl;
cout<<sum(a,b);

}
