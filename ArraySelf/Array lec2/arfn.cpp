#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
cout<<endl;
}
int change(int b[]){
b[4]=6;
}
int main(){
    int arr[]={1,2,3,4,5};
    display(arr);
    change(arr);
     display(arr);

}