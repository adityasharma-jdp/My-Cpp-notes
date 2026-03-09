#include<iostream>
using namespace std;
int main(){
int cp,sp;
cout<<"enter the value of cp:-";
cin>>cp;
cout<<"enter the value of sp:-";
cin>>sp;
if(sp>cp){
    cout<<"profit="<<sp-cp;
}
if(cp>sp){
    cout<<"loss="<<cp-sp;
}
if(cp==sp){
    cout<<"no profit no loss";
}

}