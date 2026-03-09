#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int x;
    cin>>x;
    bool flage=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x) flage=true;

    }
    if(flage==true) cout<<"number is in array";
    else cout<<"number is not found in array";
}