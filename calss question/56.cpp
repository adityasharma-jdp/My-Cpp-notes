// #include<iostream>
// using namespace std;
// class person{
//     public:
//     int age;
//     void set(int age){

// if(age<0) cout<<"invaild age";
// else this->age=age;
//     }
//     void get(){
//         if(age>0)
//         cout<<age<<" is your age"<<endl;
//     }



// };

// int main(){
//     person p1;
//     p1.set(-10);
//     p1.get();


// }
// Deep copy vs shallow copy ka use  
#include<iostream>
using namespace std;
int main(){
    
    int *p1=new int (10);
    int *p2=new int (*p1);
    *p2=20;
    
    cout<<*p1<<" "<<*p2<<endl;
}