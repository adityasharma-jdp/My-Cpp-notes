#include<iostream>
using namespace std;
int area(int radius){
    float ans=(22*radius*radius)/7;
    return ans;
}
int main(){
    int r;
    cout<<"ENter the value of radius";
    cin>>r;
    area(r);
    cout<<area;
}
