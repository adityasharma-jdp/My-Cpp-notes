// #include<iostream>
// using namespace std;
// class animal{
// protected:
// void display1(){
//     cout<<"this is animal class"<<endl;

// }
// };
// class dog : public animal{
// public:
// void display2(){
//     cout<<"this is child class"<<endl;
// }
// };
// class puppy: public dog{
//     public:
//     void display3(){
//         cout<<"this is child to child class"<<endl;
//     }
// };
// int main(){
//     animal a1;
//     dog d1;
//     puppy p1;
   
//     d1.display2();
//     p1.display2();
// }


#include<iostream>
using namespace std;
class animal{
public:
void display1(){
    cout<<"this is parent class "<<endl;
}
};
class animal : public dog{
    public:
    void display2(){
        cout<<"thias is dog class "<<endl;
    }

};
class animal : public cat{
  public:
  void display3(){
    cout<<"this cat classs"<<endl;
  }  
};
int main(){
  .
  

}