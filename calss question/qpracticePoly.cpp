//wap a c++ program to calculate area of different shapes such as circle 
//rectangle using run time polymohrphisum that is parent class pointer means 
#include <iostream>
using namespace std;

// Base Class
class Shape {
public:
    virtual void area() {
        cout << "Area function of Shape" << endl;
    }
};

// Derived Class - Circle
class Circle : public Shape {
private:
    float r;
public:
    Circle(float radius) {
        r = radius;
    }

    void area() override {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

// Derived Class - Rectangle
class Rectangle : public Shape {
private:
    float l, b;
public:
    Rectangle(float length, float breadth) {
        l = length;
        b = breadth;
    }

    void area() override {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

int main() {
    Shape *ptr;  // Parent class pointer

    Circle c(5);
    Rectangle r(4, 6);

    ptr = &c;
    ptr->area();   // Calls Circle area()

    ptr = &r;
    ptr->area();   // Calls Rectangle area()

    return 0;
}