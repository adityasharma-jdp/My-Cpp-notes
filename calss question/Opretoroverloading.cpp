#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    // operator overloading
    bool operator==(Student s) {
        if (marks == s.marks)
            return true;
        else
            return false
    }
};

int main() {
    Student s1(90), s2(90);

    if (s1 == s2)
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}
//Write a C++ program to create a class Complex for representing complex numbers. Overload the == operator to compare two complex numbers. If both real and imaginary parts are equal, display "Equal", otherwise "Not Equal".
// Write a C++ program to create a class Student with marks as data member. Overload the == operator to compare two students based on their marks and print whether they are equal or not.
