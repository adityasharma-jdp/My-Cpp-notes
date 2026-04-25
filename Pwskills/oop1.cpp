// class ke ander jo bhi varribles hote hai unhe data member kehte hai
// class is user defined data type 
// class me kahi tarah ke dat ko likh sakte hai 
//exees modifier public,private hote hai====> callse data abstraction
// multipe data ko ek single unit ke ander daln ahi hi cata encapculaion kehlata hai jise hum coding me class kehtte  hai
// data member functon===> classs ke ander likhe jane wale function ko data member kehte hai
//member function data member ko exess kar sakte hai
//class is blueprint===>rough idea kiske baare me code likha ja raha hai
// blue print ka mtlb yeh hai ki code ka structure ki usme kya kya data type ke varrrible 

#include <iostream>
using namespace std;


int main() {

    char s[10][10] = {"","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 9; i++) {
        if(n == i) {
            printf("%s", s[i]);
            break;
        }
    }

    if(n > 9)
        printf("Greater than 9");

    return 0;
}
