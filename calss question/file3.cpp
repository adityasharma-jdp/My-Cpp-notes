#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream f2("data.txt");
    int a;
    while(f2>>a){
        cout<<a<<" ";
    }
    f2.close();
  //  cout<<"file saved";
}