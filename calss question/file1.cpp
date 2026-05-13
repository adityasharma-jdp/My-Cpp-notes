#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream f1("data.txt", ios::app);
    f1<<45<<" "<<32<<" "<<90<<" ";
    f1.close();
    cout<<"file saved";
}




// #include<iostream>
// #include<fstream>    // ✅ File handling ke liye
// using namespace std;

// int main() {
//     // File kholo likhne ke liye
//     ofstream file("student.txt");
//     //        ↑         ↑
//     //     Object    File ka naam

//     // ✅ File khuli ki nahi — check karo
//     if(!file) {
//         cout << "File nahi khuli!" << endl;
//         return 1;
//     }

//     // File mein likho
//     file << "Student Name: Roshan"  << endl;
//     file << "Roll Number: 101"      << endl;
//     file << "Marks: 95"             << endl;

//     // File band karo                                
//     file.close(); // ✅ Hamesha close karo!

//     cout << "File mein likh diya!" << endl;
//     return 0;
// }