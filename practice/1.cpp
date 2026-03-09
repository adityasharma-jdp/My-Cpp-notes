#include<iostream>
using namespace std;
int min(int x,int y){
    int a;
    if(x>y) a=x;
    else a=y;
    return a;
}
int main(){
    int x,y;
    cin>>x>>y;

    min(x,y);
    cout<<min(x,y);
}
