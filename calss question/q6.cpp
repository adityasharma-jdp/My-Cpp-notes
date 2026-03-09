/*wap to make a class which will use static members and constant members and demonstrate their use  */
// Program: Demonstrate static member and constant member

#include<iostream>
using namespace std;

class Student
{
    const int roll;      // constant data member
    static int count;    // static data member

public:

    Student(int r) : roll(r)   // constructor using initializer list
    {
        count++;               // static variable increase
    }

    void display()
    {
        cout<<"Roll Number: "<<roll<<endl;
    }abort3

    static void totalStudents()
    {
        cout<<"Total Students: "<<count<<endl;
    }
};

int Student::count = 0;   // static member initialization

int main()
{
    Student s1(101);
    Student s2(102);

    s1.display();
    s2.display();

    Student::totalStudents();   // static function call

    return 0;
}