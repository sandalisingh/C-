/*
Sandali Singh


OOPs Assignment Q5

*/

#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

class friendfunc2;

class friendfunc1
 {
        int x, y;
    public:    
        friendfunc1(int,int);   //CONSTRUCTOR
        friend void display(friendfunc1);
        friend float avg(friendfunc1, friendfunc2);
};

class friendfunc2
{
        int a, b, c;
    public:
        friendfunc2(int,int,int);   //CONSTRUCTOR
        friend void display(friendfunc2);
        friend float avg(friendfunc1, friendfunc2);
};

friendfunc1 ::  friendfunc1(int x,int y)    //CONSTRUCTOR
{
    this->x = x;
    this->y = y;
}

friendfunc2 ::  friendfunc2(int a,int b,int c)  //CONSTRUCTOR
{
    this->a = a;
    this->b = b;
    this->c = c;
}

void display(friendfunc1 f){
    cout<<f.x<<"  "<<f.y;
}

void display(friendfunc2 f){
    cout<<f.a<<"  "<<f.b<<"  "<<f.c;
}

//FRIEND TO both the classes
float avg(friendfunc1 f1, friendfunc2 f2)
{
    return (f1.x + f1.y + f2.a + f2.b + f2.c)/5.00;
}

 int main()
 {
    int x, y, a, b, c;

    cout<<"\nfriendfunc1: Enter 2 nos. =  ";
    cin>>x>>y;
    friendfunc1 s1(x, y);
    
    cout<<"S1 : ";
    display(s1);

    cout<<"\n\nfriendfunc2: Enter 3 nos. =  ";
    cin>>a>>b>>c;
    friendfunc2 s2(a, b, c);

    cout<<"S2 : ";
    display(s2);

    cout<<"\nAverage: "<<avg(s1, s2)<<endl;

    return 0;
 }