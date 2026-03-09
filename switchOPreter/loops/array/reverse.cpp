#include<iostream>
using namespace std;
int main(){
    int n;
    
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];

    }
    for(int i=1;i<=n-1;i++){
        int  temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
}
for(int i=1;i<=n;i++){
    cout<<arr[i];
}
    
}