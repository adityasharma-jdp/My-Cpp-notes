#include<iostream>
using namespace std;
class player{
    public:// bahr se exees kiya ja sakta hai 
int score;
int health;
void showhealth(){
    cout<<"helth is  "<<health;
}

};
int main(){
    int a=10;
    player amit;

    amit.score=90;
    amit.health=100;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;
    amit.showhealth();

}