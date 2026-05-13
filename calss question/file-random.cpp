#include<iostream>
#include<fstream>
using namespace std;
// file random access
int main(){
    fstream file;
    file.open("data.txt",ios::out);
    file << "ABCDEfghijklm";   // writing
    file.close();
    file.open("data.txt",ios::in);
    if(!file.is_open()){
    	cout<<"file not open"<<endl;
    	return 0;
    }
    file.seekg(2, ios::beg);  // move reading pointer to 3rd from beginning
    char ch;
    file.get(ch);// reads one character and stores in ch
    cout << "Character at position 3: " << ch<<endl;
    file.close();
    file.open("data.txt",ios::out | ios::in);
    file.seekp(6,ios::beg);// moves writing pointer to 7th from beginning
    file.put('y');// writes given character 'y' at current position
    file.close();
}