// // whenever ww are working with dynamic memory and we copy one object to another object then only address data members are copied 
// //if we use inbulit copy constructor // just copy karke memory allocate and adrres copy hoga only pointer ka 
// // 2. deep copy show by making arone copy constructor we can alloacte new memmory to data members and then copy value of data members from the copied object 
// //then this procces is known as deep copy.
// // new mwmory allocated hogi value
// //NOTE:==>  whenever we make shallow copy then changes to original varriables will also make changes to copied varriable 
// //viceperar nut we make deep copy we can get redoff this problem 
       
// //shallow copy
// // #include<iostream> 
// // using namespace std;
// // int main(){
// //     int *p1=new int(15);
// //     int *p2;
// //     p2=p1; // shallow copy ka example
// // *p2++; // ek  me change karte hi dusre me bhi change ho jayega
// // cout<<p2<<endl<<p1;
// // }
// #include<iostream> 
// using namespace std;
// int main(){
//     int *p1=new int(15);
//     int *p2=new int();
//     *p2=*p1; // deep copy ka example

// cout<<*p2<<endl<<*p1;
// }

#include<iostream>
using namespace std;
int main(){
    int *p1=new int (20);
    int *p2=*p1;
    *p2=10;
    cout<<*p1<<" "<<*p2<<endl;
}