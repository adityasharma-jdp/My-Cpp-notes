#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    public:

    student(int r=0, string n="" ){
        roll=r;
        name=n;
    }
    friend ostream& operator<<(ostream &out,student &s);
};
ostream &operator<<(ostream &out,student &s){
    out<<"student name"<<s.name<<endl;
    out<<"student rooll Number"<<s.roll<<endl;
    return out;
}
 int main(){
    student s1(100,"Roshan");
    student s2(200, "Aaditya");
    cout<<s1<<s2;

 }