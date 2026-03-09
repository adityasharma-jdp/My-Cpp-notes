//dynamic memmory allocatioonm dynaic tabhi delete hoti hai jab hum delete  karte hai
//  whenever data members of clas sare allocated mrmmory using dynamic memory allocation then we are requre dto delete that memory u=]\
//in destructor manulally to avoid memory leak these destructors are known as dynamic destructor




//self
/*dynamically allocated memory ko delte karna is callled dynamic destructor*/

#include<iostream>
using namespace std;
class car{
    int *year;
    string *name;
    public:
    car(){ // now itbecomes dynamic constructor 
        year= new int(0);
        name=new string("no-name");
        cout<<"object is created ";
    
    
    }
    car(string s,int y){ // noeits become dynamic destructor
        year=new int(y);
        name=new string(s);
        cout<<"object is created with"<<name<<":"<<year<<endl;

    }
    ~car(){
        delete name;
        delete year;
        cout<<"object is destructed and memmeort is deletd "<<endl;




    }

};

int main(){
    car c1,c2("BMW",1960),c3("alto",2005);


}

//constructor where dynmic memory is allocated known as dynamic constructor