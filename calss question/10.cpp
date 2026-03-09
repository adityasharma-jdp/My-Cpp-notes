#include<iostream>
using namespace std;
namespace hw{
    void hello(){
        cout<<"hello world"<<endl;
    }
}
namespace hi{
    void hello(){
        cout<<"hello india "<<endl;
    }
}
int main(){
    hw::hello();
    hi::hello();
    return 0;

}