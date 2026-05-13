// rethrowing anexecption :
// in c++ rethrowig execption means whenever an errorsaccourus in try blocks instedof handling error in local catch error the error raise handle by outer catch block 
#include<iostream>
#include<stdexcept>
using namespace std;
float division(int num,int den){
    try{
        if(den==0){
            throw runtime_error("division by zero is not allowed");
        }
        return float(num)/den;
       
    }
    catch(exception &e){
        cout<<"error found and rethrown";

        throw; // rethrowing the exception to be handled by outer catch block

    }

   
}
int main(){
    int a = 5, b = 0;
    try{
        cout<<division(a,b);
    }
    catch(exception &e){
        cout<<"error found in main function : "<<e.what();
    }
}
