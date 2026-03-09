// WAP To take a string from user and check whether it is panagram string or not
//PAnagram==> string are strings which contains all alphabat a to z
//eg: the quick brown fox jumps over the lazy dog
#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);

    int count[26] = {0};   // 26 letters ke liye array

    // String check karna
    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // Uppercase ko lowercase me convert karna
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        // Agar letter a-z ke beech hai
        if(ch >= 'a' && ch <= 'z')
        {
            count[ch - 'a'] = 1;
        }
    }

    // Check karna sab letters aaye ya nahi
    for(int i = 0; i < 26; i++)
    {
        if(count[i] == 0)
        {
            cout<<"Not a Pangram String";
            return 0;
        }
    }

    cout<<"Pangram String";
    return 0;
}