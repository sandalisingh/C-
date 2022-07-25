/*
Sandali Singh

OOPs Assignemmt Q9

*/

#include <iostream>
#include <stdio.h>   //for gets() and puts()
#include <string.h>

using namespace std;

class String{
    string str;

    public:
        String()
        {
            str = "";
        }
        String(string s)
        {
            str = s;
        }
        void operator=(String s);
        String operator+(String s);
        bool operator==(String s);
        bool operator<(String s);
        bool operator>(String s);
        void display();
};

void String :: operator=(String s){
    //cout << "Operator Overloading =\n";
    str = s.str;
}

String String :: operator+(String s){
    String temp;
    //cout << "Operator Overloading +\n";
    temp.str = str + s.str;
    return temp;
}

bool String :: operator==(String s){
    //cout << "Operator Overloading ==\n";
    if (str == s.str)
        return true;
    return false;
}

bool String :: operator<(String s){
    //cout << "Operator Overloading <\n";
    int x = min(str.size(), s.str.size());
    for (int i = 0; i < x; i++)
    {
        if (str[i] < s.str[i])
            return true;
        else if(str[i] > s.str[i])
            return false;
    }
    return false;
}

bool String :: operator>(String s){
    //cout << "Operator Overloading >\n";
    int x = min(str.size(), s.str.size());
    for (int i = 0; i < x; i++)
    {
        if (str[i] > s.str[i])
            return true;
        else if(str[i] < s.str[i])
            return false;
    }
    return false;
}

void String :: display(){
    cout << str << "\n";
}


int main(){
    String s1("Sandali"), s2("Singh"), ch;
    cout << "\ns1 : " ;
    s1.display();
    cout << "\ns2 : " ;
    s2.display();
    
    String s = (s1 + s2);
    cout << "\ns1 + s2 : " ;
    s.display();
    
    ch = s1;
    cout << "\nch = s1 : " ;
    ch.display();

    cout << "\ns1 < s2 : " << (s1 < s2);

    cout << "\ns1 > s2 : " << (s1 > s2);

    cout << "\ns1 == s2 : " << (s1 == s2);

    return 0;
}