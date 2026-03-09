#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
cout<<endl;
void odd(int b[],int n){
    for(int i=0;i<n;i++){
        if(b[i]%2==0) cout<<b[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    display(arr,n);
    odd(arr,n);


}