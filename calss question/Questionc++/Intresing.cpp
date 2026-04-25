#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    public:
    student(int r,string n){
        roll=r;
        name=n;
    }
    friend istream& operator>>(istream& is, student& ss){
        cout<<"enter stdent name"<<endl;
        is>>ss.name>>ss.roll;
        return is;

    }
   friend ostream& operator<<(ostream& os,student& ss){
        os<<"Roll: "<<ss.roll<<" Name: "<<ss.name;
        return os;
    }
    

};
int main(){
    student s1(1,"satyarth");
    cin>>s1;
    cout<<s1<<endl;

    return 0;
}