#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element you want to serch ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"element is perenet in array";
    else cout<<"element is not persent in array";
}