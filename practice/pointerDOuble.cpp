// pointer to pointer the is type of double varribles which stores the adrees of another pointer
// pinter jiski value define nhi ki hai use Waild pointer kehtae hai
// pointer jab ek doosre ko point karte hai touse poonter chainig kehte hai
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    int **p1=&p;
    int *p2=NULL;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**p1<<endl;
    cout<<p2;
}


//-*****WILD POINTER*************---
// whenever we have dclearing a pointer and not providing sum adreess to it and that ponie=ter known a s wild pointer because it will have some garbage value

// sidha mtlb pointer declre kake chod diya hai usko koi value nhi di gyi ho use hi hum wiuld pointer kehte  hai 
//** to resolve the issuue of wild pointer there is a concept of null pointer






// Memmory Leak ===> whenever we allocate dynamic memmory and forgot to delte the same then that  memeory is consodrd as leaked memory because i will also availble after the programn end
// Cyber Attecerks ei hi memory serch karte hai


// **********pointer to Functon *****************

// as we know to store the adrees of intiger variiblee we need the integer type of pointer 
// to store the address of some object we need to its class typeof pointer in a simmilar way to stores the adrees of some function wwe need to have the same funtion type of pointer
