#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int score;
    string name;
    public:
    //setter
    void set(int h){
        health=h;
      

    }
    void sets(int s){
        score=s;
      

    }
    //getter
    int gethealth(){
        return health;
    }
    int getscore(){
        return score;
    }

};

int main(){
    player p1;
    p1.set(20);
    p1.sets(100);
    cout<<p1.gethealth()<<endl;// function hai to bhai round bracke to aayega hi tum ese lagan a kaise bhul sakte ho
    cout<<p1.getscore()<<endl;

}