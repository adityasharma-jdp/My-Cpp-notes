#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  int  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int freq[1000]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int max=-1;
    int maxindex=-1;
    for(int i=0;i<1000;i++){
        if(freq[i]>max){
            max=freq[i];
             maxindex=i;
        } 
        
    }
    cout<<maxindex<<" is maxmumindex";

}