#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ENter the value of charactor:-";
    cin>>ch;
    int n=(int)ch;
    if ((n>=95&&n<=122)||(n>=65&&n<=90))
    {
     if(ch=='a' ||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<ch<<"  type of alphabat is  vowel";
     }
     else{
        cout<<ch<<"  type of alphabat  consonant ";
     }
    }
    else{
        cout<<ch<<" charactor is not alphbat";
    }
    

}