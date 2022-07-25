/*
Sandali Singh

OOPs Assignemmt Q6

*/

#include<iostream>
#include<stdio.h>
using namespace std;

class Student{
    char name[20];
    float m1, m2, m3;

    public:
        void get_data();
        friend class Calc_Avg;
        void display();
};

void Student::get_data(){
    cout<<"\n\nSTUDENT";
    fflush(stdin);
    cout<<"\nName : ";
    gets(name);
    cout<<"Marks in 1st Subject : ";
    cin>>m1;
    cout<<"Marks in 2nd Subject : ";
    cin>>m2;
    cout<<"Marks in 3rd Subject : ";
    cin>>m3;
}

//this class is friend to Student class
class Calc_Avg{
    public:
        float marks_avg(Student& S);
};

float Calc_Avg::marks_avg(Student& S){
    return (S.m1 + S.m2 + S.m3)/3.0 ;
}

void Student::display(){
    cout<<"\n\nSTUDENT";
    cout<<"\nName : ";
    puts(name);
    cout<<"Marks in 1st Subject : "<<m1;
    cout<<"\nMarks in 2nd Subject : "<<m2;
    cout<<"\nMarks in 3rd Subject : "<<m3;
}

int main(){
    Student S;
    Calc_Avg C;
    S.get_data();
    S.display();
    cout<<"\nAverage : "<<C.marks_avg(S)<<"\n";
    return 0;
}