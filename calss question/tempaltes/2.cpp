#include<iostream>
using namespace std;
template <typename T1, typename T2 >
void sum(T1 a, T2 b){
    cout<<"The sum is: "<<a+b<<endl;
}
int main(){
   int a=5,b=10;;
   sum<int,int>(a,b);
}

//write a function template for swapping two values of two varriables whaich are to decided at the time of calling the function.