// //to prevent exidendtal changes in data members from outside the class we can make a data member privarte and public member function to set and get their values
// #include<iostream>
// using namespace std;
// class person{
//     private:
//     string name;
//     int age;
//     public:
//     void set(int a,string n){

//         name=n;
//         age=a;
//     }
//     void display(){
//         if (age<0) cout<<"age is negative "<<endl;
//         else{/* rasie error */
// cout<<name<<" is "<<age<<" years old."<<endl;
//         }
        
//     }


// };
// int main(){
//     person p1;
//     person p2;
//     p1.set(20,"Aditya");
//     p2.set(25,"saurabh");
//     p1.display();
//     p2.display();



    
// }
#include<iostream>
using namespace std;
class person{
    private:
int age;
string name;
public:
void display(int a, string n){
    if(a>0){
        age=a;
        name=n;

    }
    else cout<<"invaild age";


}



};
int main(){
    int age;
    cout<<"enter the value of age ";
    cin>>age;

    person p;
    p.display(age,"rahul");
}