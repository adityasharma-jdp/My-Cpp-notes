#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of target ";

    cin>>x;
    int n;
    cout<<"enter the size array ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of aray"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];


}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==x){
           cout<<i<<" "<<j<<endl;
        }
    }
  
}

}