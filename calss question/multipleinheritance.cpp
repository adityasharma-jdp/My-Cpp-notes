// // / more than one parent clas sand one child class
// /*

// class paren1{
// };
// class parent2
// {
// };
// class parent3{
// };

// class child: public parent1,public parent2,public parent3
// {



// };













// */
// // wap to create a parent class then its choild class and than its super child class then so constructor and distructor sequence by creating supe child class object

// #include<iostream>
// using namespace std;
// class parent1{
// public:

// parent1(){
//     cout<<"parent 1 constructor"<<endl;
// }
// ~parent1(){
//     cout<<"parent 1 distructor"<<endl;
// }
// };
// class child : public parent1{
//     public:
// child(){

// cout<<"child 1 coustructor"<<endl;
// }
// ~child(){
//     cout<<"child 1 distructor"<<endl;
// }

// };
// class superchild: public child{
//     public:
//     superchild(){
//         cout<<"superchild constructor";

//     }
//     ~superchild(){
//         cout<<"super child class distructor";
//     }
// };
// int main(){
//     superchild c;
// }


#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"this is the parenrt class"<<endl;

    }
    
};
class child:public parent{
int a;
int b;
};
int main(){

}