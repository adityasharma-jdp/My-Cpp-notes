// // This the type of single inheritance where one base class and one parent class 
// // #include<iostream>
// // using namespace std;
// // class animal{
// // public:
// // void display1 (){
// //     cout<<"this is animal class "<<endl;
// // }

// // };
// // class dog : public animal{
// //     public:
// //     void dispaly1(){
// //         cout<<"this is child class of animal "<<endl;


// //     }
    
// // };
// //  int main(){
// // dog d;
// // d.dispaly1();
// // }

// #include<iostream>
// using namespace std;
// class father{
//     public:
// void care(){
//     cout<<"father care child"<<endl;


// }

// };
// class mother{
//     public:
// void love(){
//     cout<<"mother Love child "<<endl;
// }
// };
// class child : public father, public mother{
//     public:

//     void both(){
//     cout<<"father care for child and mother love to child"<<endl;
//     }
// };

// int main(){
//     child c1;
//     c1.love();
//     c1.both();

// }

// #include <iostream>
// using namespace std;
// class grandpha{
// public:
// void gp(){
//     cout<<" this is pre parent classs"<<endl;
// }
// };
// class parent : public grandpha{
//     public:
// void pp(){
//     cout<<"this ias parent class"<<endl;
// }
// };
// class child : public parent {
// public:
// void child(){
//     cout<<" this is child class "<<endl;
// }

// };



// int main(){
//     child c1;
//     c1.child();
//     c1.gp();
//     c1.pp();


// }

// //Heierical inheritance 

// #include<iostream>
// using namespace std;
// class parent{
// public:
// void show(){
//     cout<<"this is parent class "<<endl;

// }


// };
// class b1:  virtual public parent{


// };
// class c1 :virtual public parent {

// };
// class k1 : public b1, public c1{


// };

// int main(){

//     k1 obj;
    
//     obj.show();
    

// }


// Hybrid inheritance
#include<iostream>
using namespace std;
class parent{
public:
void display1(){
   
        cout<<"this is the parent class "<<endl;

    

}

};

class c1: virtual public parent{

};
class c2 : virtual public parent{

};
class child: public c1,public c2{

};

int main(){
child c1;
c1.display1();
}