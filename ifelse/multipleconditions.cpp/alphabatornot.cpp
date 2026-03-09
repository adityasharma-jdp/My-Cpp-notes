#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter the value of charactor";
cin>>ch;
int ascii=(int)ch;
if(ascii>97&&ascii<122 || ascii>=65&& ascii<=90){
    cout<<"the charactor is alphabat";
}
else{
    cout<<"characor is not alphabat";

}

}