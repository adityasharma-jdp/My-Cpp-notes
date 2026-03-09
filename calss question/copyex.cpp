// 





#include<iostream>
using namespace std;
class student{

    public:
    int *age;
    string *name;
    student(string s,int a){
        age=new int(a);
        name=new string(s);
        //mujhe yha pe copy constructor chaiye jha deepcopybna rhi hai


    }


};
int main(){
    student s1("ram",25);
    
    student s2=s1;
    *(s1.age)=29;
    cout<<*(s2.name)<<*(s2.age)<<endl;
    cout<<*(s1.name)<<*(s1.age)<<endl;
}
// every class has it on inbult copy const. which were fine for normalvaribles but when we atre dynamic memory 
//that inbuilt copy cons provided the shallow copy 
// 2.if we want deep then we have to make own cons. to deep copy 