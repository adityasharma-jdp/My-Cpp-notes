#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    cout<<"enter the element of the arrauy";

    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
   
    int target;
    cout<<"enter the value of target element ";
    cin>>target;
    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<v.size()-1;j++){
            if(v[i]+v[j]==target){
                cout<<i<<","<<j<<endl;
            }
            
        }

    }

}