#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
        
    }
    int sum=0;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<sum;
    
}