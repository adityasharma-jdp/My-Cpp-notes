#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int rev[5];
    int n=5;
    for(int i=0;i<5;i++){
        rev[i]=arr[n-1-i];

    }
    for(int k=0;k<5;k++){
        cout<<rev[k];
    }
}