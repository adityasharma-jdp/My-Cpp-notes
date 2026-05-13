#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream f1("data.txt");
    f1<<4<<" "<<2<<" "<<9<<" ";
    f1.close();
    cout<<"file saved";
}