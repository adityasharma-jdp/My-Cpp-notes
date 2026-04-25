// //Wap a c+++ implement a class having an integer data member now you are required to write a member function which will add two object of class
// //add object mean add data membersof class
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor to initialize value
    Number(int v = 0) {
        value = v;
    }

    // Member function to add two objects
    Number add(Number obj) {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    // Function to display value
    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1(10), n2(20), n3;

    // Adding two objects
    n3 = n1.add(n2);

    // Display result
    n3.display();

    return 0;
}


// }
//wap a c++ tocreate a class to store complex numbers and then you are requred toadd substract andmultipy two complexnumber using member function
#include<iostream>
using namespace std;
class complex{
int real;
int img;

};
int main(){
    
}