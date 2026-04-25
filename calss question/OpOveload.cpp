// #include<iostream>
// using namespace std;

// // Complex class banayi
// class Complex{

//     int real, imag;   // data members (real + imaginary part)

// public:

//     // Constructor → values set karne ke liye
//     Complex(int r, int i){
//         real = r;   // real part assign
//         imag = i;   // imaginary part assign
//     }

//     // operator+ overload kar rahe hain
//     Complex operator+(Complex c){

//         // temp object banaya result store karne ke liye
//         Complex temp(0,0);

//         // logic → real parts add
//         temp.real = real + c.real;

//         // logic → imaginary parts add
//         temp.imag = imag + c.imag;

//         // result return
//         return temp;
//     }

//     // display function
//     void display(){
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main(){

//     // object 1
//     Complex c1(2,3);   // 2 + 3i

//     // object 2
//     Complex c2(4,5);   // 4 + 5i

//     // yaha operator call ho raha hai
//     Complex c3 = c1 + c2;

//     // result print
//     c3.display();

//     return 0;
// }
#include<iostream>
using namespace std;
class hours{
    public:
    int hour;
    hours(int hour){
        this->hour=hour;

    }
void display(){
    cout<<hour<<" is number of hours";
}
};
int main(){
int h=5;
hours h1=h;
h1.display();


}