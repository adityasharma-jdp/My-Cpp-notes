#include<iostream>
using namespace std;

    class car{
        public:
        string carname;
        int carmodel;
        void show(){
            cout<<carname<<":"<<carmodel<<endl;

        }
    };
    int main(){
        car c1;
        car c2;
        c1.carname="maruti";
        c1.carmodel=2005;
        c2.carname="shift";
        c2.carmodel=2010;
        c1.show();
        c2.show();
    }
