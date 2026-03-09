#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int forsum=n*(n+1)/2;
    int arrsum=0;
    for(int i=1;i<=n;i++){
        arrsum=arrsum+arr[i];
    }
    int ans=forsum-arrsum;
    cout<<ans;
    

}