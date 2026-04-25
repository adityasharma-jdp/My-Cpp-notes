#include<iostream>
using namespace std;

class Student {

    string name;
    string course;
    int roll;

public:

// 1️⃣ Default Constructor

Student() {
        cout << "Default Constructor Called" << endl;
    }


    // 2️⃣ Two Parameter Constructor
    Student(int r, string s) {
        roll = r;
        name = s;
        cout << "Student Created: " << roll << " " << name << endl;
    }

    // 3️⃣ Three Parameter Constructor
    Student(int r, string s, string c) {
        roll = r;
        name = s;
        course = c;
        cout << "Student Created: "<< roll << " "<< name << " "<< course << endl;
    }
};


// Jo Bhi Hum Kaise Le Liye 

int main() { 
Student s1;                         // Default agar koi bhi pamenter pass nhi kiye hai o autaomatically default constructor
Student s2(101, "Aditya");          // 2 parameter kiye hai to paramatrise constr    Student s3(102, "Rahul", "CSE");    // 3 parameter pass kiye hai to 3 paramaeterise constructor
Student s3(101,"Aaditya","Cse");
return 0;


}
