#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the three digit number ";

    cin>>n;
    int sum=0;
    for(int i=0;i<3;i++){
        int lastdigi=n%10;
        n=n/10;
        sum+=lastdigi;


    }
    printf("%d",sum);

}