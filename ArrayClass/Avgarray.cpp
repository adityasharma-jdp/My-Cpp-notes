#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];

    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+arr[i];
        
    }
    for(int i=1;i<=n;i++){
        int ans=sum/n;
        cout<<ans;
    }
    
}