// #include<iostream>
// using namespace std;

// class Student {
//     // Private data members
//     string name;
//     int roll;

// public:
//     // ✅ Step 1 — Constructor
//     Student(int r=0, string n="") {
//         roll = r;
//         name = n;
//     }

//     // ✅ Step 2 — friend declare karo
//     // >> ke liye
//     friend istream& operator>>(istream &in, Student &s);

//     // ✅ Step 3 — << bhi chahiye print ke liye
//     friend ostream& operator<<(ostream &out, Student &s);
// };

// // ✅ Step 4 — >> operator define karo
// istream& operator>>(istream &in, Student &s) {
//     cout << "Roll Number daalo: ";
//     in >> s.roll;         // cin se roll lo

//     cout << "Name daalo: ";
//     in >> s.name;         // cin se name lo

//     return in;            // ZARURI hai!
// }

// // ✅ Step 5 — << operator define karo
// ostream& operator<<(ostream &out, Student &s) {
//     out << "Roll Number: " << s.roll << endl;
//     out << "Name: "        << s.name << endl;
//     return out;
// }

// int main() {
//     Student s1;       // Empty object bana

//     cin  >> s1;       // >> operator call hoga
//     cout << s1;       // << operator call hoga
// }
#include<iostream>
using namespace std;
class student{
int marks;
int roll;
public:
student(int m=0,int r=0){
    marks=m;
    roll=r;
}
friend istream &operator>>(istream &in,student&s);
friend ostream &operator<<(ostream &in,student&s);
};
istream &operator>>(istream &in,student &s){
    cout<<"enter the marks and roll number "<<endl;
    in>>s.marks;
    in>>s.roll;
    return in;
}
ostream &operator<<(ostream &out,student &s){
    out<<"student matks "<<s.marks<<endl;
    out<<"student roll number "<<s.roll<<endl;
    return out;
}

int main(){
student s1;
cin>>s1;
cout<<s1;
}