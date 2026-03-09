#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            if(arr[i]>arr[j]){ cout<<arr[j];
                continue;
            } 
        }
    }
}