#include<iostream>
using namespace std;

class number {
    string name;
    int a;

public:
    // constructor
    number(string n, int val) {
        name = n;
        a = val;
    }

    // default constructor
    number() {
        name = " ";
        a = 0;
    }

    // prefix ++ operator overloading
    number operator++() {
        number t;
        t.a = this->a;     // old value store
        t.name = this->name;

        this->a = this->a + 1;   // increment

        return t;   // return old object
    }

    // display function
    void display() {
        cout << name << " = " << a << endl;
    }
};

int main() {
    number num1("num1", 10), num2("num2", 15);

    number num4;
    num4 = ++num1;

    num1.display();
    num4.display();

    return 0;
}