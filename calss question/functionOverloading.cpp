// function overloading
// function overloding is the concept is in which we can make two or more same name function 
// by differentiating type of arguments or number of arguments or both 

#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;

}
float sum(float a, float b){
    return a+b;
}
int main(){
    int a=20,b=10;
    float c=20.2,d=5.2;
    cout<<sum(a,b)<<endl;

    cout<<sum(c,a)<<endl;

     
} 
