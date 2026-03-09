#include<iostream>
using namespace std;
class player{
    //oops kehta hai ki data mmbers ko hamesha private rakhna chaiye for privacy ke liye
    int health;
    int score;
    int age;
    bool alive;
public:
//getter ka use karke data members ke data ko set kars sakte hai 

int gethealth(){
    return health;
}
int getage(){
    return age;
}
int getscore(){
    return score;
}
bool getalive(){
    return alive;
}
//setter ka us e value ko set kane ke
int sethealth(int health){
    this->health=health;
}
int setage(int age){
    this->age=age;
}
int setscore(int score){
    this->score=score;
}
bool setalive( bool alive){
    this->alive=alive;
}
int addscore(player a, player b){
    return a.getscore() + b.getscore();
}
};
int main(){
    player p1,p2; // object creation statically
    p1.sethealth(20);
    p1.setage(28);
   
    p1.setalive(true);
    p1.setscore(200);
     p2.setscore(100);
    cout<<p1.gethealth()<<endl;
    cout<<p1.getscore()<<endl;
    cout<<p1.getage()<<endl;
    cout<<p1.getalive()<<endl;
    cout<<addscore(p1 , p2)<<endl;


}