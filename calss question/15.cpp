//employess and their sallryke oops
#include<iostream>
using namespace std;

    class employee{
        public:
        string name;
        int sallary;
        void showdata(){
 cout<<name<<"-"<<sallary<<endl;

        }
    };
    
    int main(){
        employee e1;
        employee e2;
        e1.name="shubhas kumar";
        e1.sallary=200000;
         e2.name="aayush kumar";
        e2.sallary=1200000;
        e1.showdata();
        e2.showdata();

    }

