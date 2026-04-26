// Template classs 

#include <iostream>
using namespace std;
template <typename T>
class person{
string name;
T salary;
public:
person(string name, T salary){
    this->name = name;
    this->salary = salary;          
}
void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
}

};
int main(){
person<int> p1("John", 50000);
person<double> p2("Alice", 75000.50);       

p1.display();
p2.display();
return 0;
}
