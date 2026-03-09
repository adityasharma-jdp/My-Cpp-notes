#include<iostream>
using namespace std;
int mini(int x,int y){
    int a;
    if(x>y) a=y;
    else a=x;
    return a;
}
int main(){
    int x,y;
    cout<<"enter 1st number";
    cin>>x;
    cout<<"enter 2nd number";
    cin>>y;
    cout<<mini(x,y)<<" is mini in both";

}