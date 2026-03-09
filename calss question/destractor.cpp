// destroctor is special member function that performs clean 
/*

| Situation      | Destructor kab call hota hai      |
| -------------- | --------------------------------- |
| Block `{}` end | Turant                            |
| Function end   | Turant                            |
| `delete`       | Turant                            |
| Program end    | Haan (sirf stack objects ke liye) |

❌ Sabse pehle clear kar do:

👉 Destructor ka class ke block se koi lena dena nahi hota
👉 Destructor ka relation hota hai object ke scope se



✅ Correct Concept:

👉 Jahan object bana hai (jis block me bana hai), us block ke end par destructor call hota hai

//joobject pehle banta hai vo baad me destroyed hota hai
// constructor me esa nhi hota hai  jo objectpehle 







*/


#include<iostream>
using namespace std;
class person{
int age;
    string name;
    public:
    person(){
        cout<<"objecet is created ";

        
    }
    person(string n , int a){
        name=n;
        age=a;

    }
    void display(){
        cout<<name<<": "<<age<<endl;
    }
    ~ person(){
        cout<<"object is destroyed: "<<endl;
    }

};
int main(){
    person p1,p2("ram",25);
    p1.display();
    p2.display();
    return 0;
    
}


