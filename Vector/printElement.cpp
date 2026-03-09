// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<"size is "<<v.size();
//     cout<<"capacity is "<<v.capacity();

//}
// agar hame inout lena hai vector ka tohhh.....
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

     for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    
}
