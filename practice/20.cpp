#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int count=0;
    int maj;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                maj=arr[i];
                count++;
                
            }
            else{
                
                break;
                
            }
           

        }

    }
    if(count>=n/2) cout<<"this yourmajority element "<<maj;
}
