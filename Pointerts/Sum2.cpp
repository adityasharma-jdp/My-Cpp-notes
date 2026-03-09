#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int* p1=&x;
    int y;
    cin>>y;
    int* p2=&y;
    cout<<(*p1)+(*p2);
}