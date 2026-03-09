#include<iostream>
using namespace std;
void change(int n,int* p1,int* p2){
     *p2=n%10;
    while(n>9){
        n/=10;
    }
    * p1=n;

}
int main(){
    int n;
    cin>>n;
    int firstdigit,lastdigit;
    int* p1=&firstdigit;
    int* p2=&lastdigit;
    change(n,p1,p2);
    cout<<firstdigit<<" "<<lastdigit;

}