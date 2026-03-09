#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(10);
    v.push_back(120);
    v.push_back(13);
    v.push_back(12);
    int multiplication=1;
    for(int i=0;i<v.size();i++){
        multiplication*=v[i];

    }
    
    for(int i=0;i<v.size();i++){
        int ans=multiplication/v[i];
cout<<ans;

    }
    

    

}