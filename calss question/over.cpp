#include<iostream>
using namespace std;

class student{
    int marks;
    public:
    student(int m=0){
        marks=m;
    }

    void display(){
        cout<<marks<<endl;
    }
    student operator++(int){
     student t ;
     
     t.marks = this->marks ;
     this->marks++;
     return t ;

    }
};
int main(){
    student s1=20;
    student s2(30);
    student s3;
    s3= s1++;
    s1.display();
    s3.display();
}