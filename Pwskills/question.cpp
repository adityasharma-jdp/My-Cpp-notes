#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int page;
    int countbooks(int p){
        if(p>price) return 0;
        else return 1;
    }
bool isbookpersent(char title){
    if(title==name) return true;
    else return false;
}

};
int main(){
    book book1;
    book1.name='h';
    book1.price=100;
    book1.page=10;
    cout<<book1.countbooks(200)<<endl;
    cout<<book1.isbookpersent('h')<<endl;


}