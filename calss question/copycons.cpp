//copy cons is cons.hat will copy ine object to another 
//copy cons. will take refrence of an object of same class as argument
#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    public:
    student(){
        cout<<"object is created "<<endl;
    }
    // this pointer
    student(int r,string s){ // constructor
        roll=r;
        name=s;

    }
    student(student &st){
        roll=st.roll;
        name=st.name;
         
    }
    void display(){
        cout<<this->name<<": "<<this->roll<<endl;
    }

};


int main(){
    student s1(1,"ramu");
    student s2(s1);//call by constructor
    student s3=s2; //call by construcor copy constructor ko bulane ka tarika 
    s1.display();
    s2.display();
    s3.display();
    student* p=&s1;
    p->display();


}
//