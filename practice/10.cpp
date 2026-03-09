#include<iostream>
using namespace std;
int main(){
     int arr[5]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   int total=n*(n+1)/2;
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int missing_number=total-sum;
    cout<<"missing number is "<<missing_number;

}

   

