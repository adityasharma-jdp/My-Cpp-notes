//  wap to swap value of two  varriables using call by pointer in function
#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<b;
}