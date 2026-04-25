// class to class type converstion
#include <iostream>
using namespace std;
class number1{
    int data;
    public:
    number1(int d){
        data = d;
     }
    void display(){
        cout<<"data = "<<data<<endl;

    }
int getdata(){
    return data;

}




};
class number2{
int num;
public:
number2(int n=0 ){
    num = n;

}
void display(){
    cout<<"num = "<<num<<endl;
}



void operator=(number1 t){
    this->num = t.getdata();   // accessing private data of number1 class

}
};
int main(){
    number1 n1(10);
    n1.display();
    number2 n2;
    n2 = n1;       // class to class type conversion

    n2.display();
    return 0;
}

// wap having twi c;lasses named kilogram and gram 
// now requred to assign object of kilogram to gram object by using type coversion
// Hint : 1 Kilogram =100 grams

