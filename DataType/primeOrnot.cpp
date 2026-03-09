#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter teh va;ue of n";
 cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int max=arr[1];
    for(int i=1;i<=n;i++){
if(arr[i]>max) max=arr[i];

    }
    cout<<max;
}