#include<iostream>
using namespace std;
int main(){
    int arr1[3]={1,2,3};
    int arr2[4]={1,2,3,4};
    
    int n1=3;
    int n2=4;
    int arrf[n1+n2];
    for(int i=0;i<n1;i++){
        arrf[i]=arr1[i];

    }
    for(int i=0;i<n2;i++){
        arrf[i+n1]=arr2[i];

    }
    for(int i=0;i<n1+n2;i++){
        cout<<arrf[i]<<" ";
    }

}