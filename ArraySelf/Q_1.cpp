#include<iostream>
using namespace std;
int main(){
    int marks[7]={80,50,30,44,25,90,100};
    for(int i=1;i<=6;i++){
        if(marks[i]<=35) cout<<" "<<i;
    }

}