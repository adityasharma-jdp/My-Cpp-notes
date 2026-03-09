 #include<iostream>
 using namespace std;
 
    class student{ //student is here class name 
        public: //exess specifier class ke bahar bhi hum ise exess kar sakte hai 
        int roll;
        string name;
        void display(){
            cout<<roll<<":"<<name<<endl;
        }
    };

 int main(){
    student s1; // user defined data type hai yaha pe student and s1 is the name of  data type 
    student s2; //user defined data type hai yaha pe student and s2 is the name of  data type 
    s1.name="aditya";
    s1.roll=250;
    s2.name="saawai";
    s2.roll=29;
    s1.display(); // yha pe  hum dot laga ke display naam ke function ko exes kar rhe hai
     s2.display();


 }
 ans ko print ka raka comple karn ek ata kaise
 //each object will have its seprate copy data members while the member functions are shared by every object 
 //whenever we are not providing any access specifer all member of class are  private if we want acces out of class require to make them public