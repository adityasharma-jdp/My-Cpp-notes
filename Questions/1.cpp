// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,1};
//     int x=1;
//     int idx =-1;

//     for(int i=0;i<5;i++){
//         if(arr[i]==x) {
//             idx=i;
   

//         }
        
//     }
//     cout<<"Your last occurence in array "<<idx;
// }


// method 2 from with the help of vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int x=4;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);
    v.push_back(4);
    int idx=-1;

    for(int i=0;i<v.size();i++){
        if(v[i]==x) idx=i;
    }
    cout<<"yourlast occcurence in array is this "<<idx;

}