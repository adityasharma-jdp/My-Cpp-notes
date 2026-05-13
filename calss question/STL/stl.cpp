// // Stl ==> is collection of pre build classes and function that makes it easy to manage data ussing coomman data structures such as vectors stack

// //or quekes maps etc. 

// // componenets of stl==>
// /*
// 1. containers==> conatainer are data stuctures which are used to store objectss and data according to reqiurement 
// eg. vector list array set unorderd set  map  unorderd map etc.

// 2. ALgorithems ==> stl algorithems as wide range of functions to perform common opretions on data nad containers 
// eg. sort,binary sercch, find,count etc.





// */
// // vector==> VECTORS IN C+++ STL 
// //vector is dynmic sized array in the stl that automatically grows and sriks as per the need of user
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v1;
//     vector<int> v2(5,22);
//     vector<int> v3={2,6,10,20};
//     for(int i=0;i<5;i++){
//         cout<<v2[i]<<" "<<endl;
//     }

//     for(auto x: v3){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     cout<<"size of v1 "<<v1.size()<<endl;
//      cout<<"size of v2 "<<v2.size()<<endl;
//       cout<<"size of v3 "<<v3.size()<<endl;
//       v1.push_back(5);
//       for(int x: v1){
//         cout<<x<<" "<<endl;

//       }
//       cout<<endl;
//       cout<<"size of v1= "<<v1.size()<<endl;
//       v2.insert(v2.begin()+3,54); // 3rd from beignning 
//         for(int x: v2){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//         cout<<"size of v2= "<<v2.size()<<endl;
// }
#include<iostream> 
#include<vector>
using namespace std;
int main(){
vector<int> v={1,2,3,4,5,6};
int sum=0;
for(auto x: v){
    sum+=x;
}
cout<<"sum of all the element "<<sum<<endl;
cout<<"average of all the element "<<sum/v.size();

}