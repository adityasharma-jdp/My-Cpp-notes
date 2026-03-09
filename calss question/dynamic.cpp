// inn c malloc calloc

//in cpp there are two types of memmory stack memory and heap memory 
//1.stack memory  is automatically allocted foir varribles at complile time anad has fixed size 
//2 for better control and flexibity dyanmic memmory allocation on heap memory is used 
//3. we can allocated memory formheap at run time using the new opretor and relese at using delete opretor 
//4.it is useful when size of require memory is not known at complile time 
//5.whenever we allocated memory usingg new opretor then we are required to releasethat memory by using the delete opretor





// #include<iostream>
// using namespace std;
// int main(){
//     int *p;
//     p=new int(15);
//     cout<<*p<< " "<<endl<<p;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int *p;
//     p=new int(125);

//     int *q;
//     q=p;
//     delete p;
//           cout<<q; // now q becomes dangiring pointer 
//     return 0; 

// }
#include<iostream>
using namespace std;
int main(){
    // dynamic memory allocation array
    int *p=new int[15]{1,2,2,3,5,8};
    for(int i=0;i<10;i++){
        cout<<p[i]<< " "<<endl;
    }
    return 0;
    
}