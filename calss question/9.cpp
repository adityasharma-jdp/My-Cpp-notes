//Namespaces 
// namespacse is the spacial container or a label that holds varriables functions or classes t0
// avoid conclusion when we have same name difrrent parts of the program
// syntax
// :: scopre resolution opretor


//  namespace nameofnamespaces{
//     body
//  }
#include<iostream>
using namespace std;


namespace maths{
    float pi=3.14;
    float aoc(int r){
        return pi*r*r;
    }
}
int main(){
    int r=7;
    cout<<maths::aoc(7);
}
