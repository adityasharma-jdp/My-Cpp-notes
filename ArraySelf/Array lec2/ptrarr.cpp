#include<iostream>

using namespace std;
int main(){
   
    // int arr[5]={1,2,3,4,5};
    // int size=sizeof(arr)/sizeof(arr[0]);
    // int product=1;
    // for(int i=0;i<size;i++){
    //     product*=arr[i];
    // }
    // cout<<product;
    int arr[5]={1,2,3,6,85555};
    int lar=arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]>lar) lar=arr[i];
    }
    int seclar=arr[1];
    for(int i=0;i<5;i++){
        if(arr[i]!=lar && arr[i]>seclar) seclar=arr[i];
    }
    cout<<seclar;
    


}
