//write a program to count how many time s a fnkction is called

#include<iostream>
using namespace std;
int fun(){
    static int i=0;
    i++;
   int a=9;
    a++;
    cout<<"a="<<a<<endl;
return i;

}
int main(){
    fun();
     fun();
      fun();
       fun();
        fun();
        cout<<fun();


}