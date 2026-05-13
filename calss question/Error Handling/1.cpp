// Error / excetion handling in C++14
// in c++ exception handling is mechanism to handle runtime errors or exceptional conditions in a controlled manner. It allows developers to write code that can gracefully handle errors without crashing the program. The main components of C++ exception handling are try, catch, and throw.
// division by zero example
//accesing invalid memory example
// file input/output example
#include <iostream>
using namespace std;
int main(){
    int a=5, b;
    cout<<"Enter a number to divide 5: ";
    cin>>b;
    try{
        if(b!=0){
            float d=(float)a/b; // division by zero 
            cout<<d<<endl;
        }
        else
            throw b;

        
    }
    catch (int e){
        cout<<"divison by "<<e<<" is not allowed "<<endl;

    }
cout<<"lets move further "<<endl;
   return 0;
    
}