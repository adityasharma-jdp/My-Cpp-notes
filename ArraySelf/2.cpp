#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    int smax=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=max &&arr[i]>smax) smax=arr[i];
    }
    cout<<"second large element is "<<smax;

}