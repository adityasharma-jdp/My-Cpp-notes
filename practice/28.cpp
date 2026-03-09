// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int pos=2;
//     int value=20;
//    int  n=5;
//     for(int i=n;i>pos;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=value;
//     n++;
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }

// }
#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5};
    int n = 5;          // current size
    int pos = 2;        // index (0-based)


    // right shift
    for(int i = pos; i<n; i++){
        arr[i] = arr[i+1];
    }

   
    n--;

    // print array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
