

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int target=2;
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]>target){ count++;
          }
          }
    cout<<count<<" elements are greter than taget element";;
}