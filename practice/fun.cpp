// // // #include<iostream>
// // // using namespace std;
// // // void display(int x, int y=0){
// // //     cout<<x<<" value of x"<<endl<<y<<" value of y"<<endl;
// // // }

// // // int main(){ // defalut me right wale ko value pehleassign ki jati hai left wale ko value pehle ssign nhi ki jati hai

// // // display(5);

// // // }
// // #include<iostream>
// // using namespace std;
// // inline int squre(int x){ // inline likhne sse yhha comile ka exicution time ko me functionka fast exicution fast hot ahai cpd run fast hota hai iske liy inlin e ka use kiya
// //     return x*x;
// // }
// // int main(){
// //     int n;
// //     cout<<"enter a number jiska tumhe squre ikalna hai ";
// //     cin>>n;
// //     cout<<n<<" ka squre "<<squre(n)<<" hai";
// // }



// #include<iostream>
// using namespace std;
// void simpleintrest(int p,int r=5, int t=1){
//     float si=p*r*t/100;
//     cout<<"your simple intrest is the "<<si<<endl;

//  }
// int main(){
//     simpleintrest(100); // given here is only pricipal amount diya hai 
//     simpleintrest(100,10); // yha pe priciapal amount ke ath saath rate bhi di gyi hai
//      simpleintrest(100,10,2); // yha pricipal amount rate and time sab passs kiya gya hai

// }

// // three are three type of calling of the function 
// //1. call by value

// #include<iostream>
// using namespace std;
// void update(int x){
//     x=20;
// }
// int main(){
//     int a=10;
//     update(a);
//     cout<<a;
// }
// call by refrence
// #include<iostream>
// using namespace std;
// void update(int &x){
//     x=20;
// }
// int main(){
//     int a=10;
//     update(a);
//     cout<<a;
//}
// 3. call by pointer
// #include<iostream>
// using namespace std;
// void update(int *x){
//     *x=20;
// }
// int main(){
//     int a=10;
//     update(&a);
//     cout<<a;
// }



#include<iostream>
using namespace std;
int add(int x,int y ){
    return x+y;

}
float add(float a,float b){
    return a+b;
}
int main(){
    cout<<add(2,3);
    cout<<add(2.3,2.5);

}
