#include<iostream>
using namespace std;

int main(){
    char str[5];
   cin.getline(str,5);
    for(int i=0;i<5;i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
 cout<<str;
}