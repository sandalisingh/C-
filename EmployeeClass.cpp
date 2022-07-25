/*
Create a class called 'Employee' that has “Empnumber‟ and “Empname‟ as data
members and member functions getdata( ) to input data display() to output data.
Write a main function to create an array of ‟Employee‟ objects. Accept and
print the details of at least 6 employees.

Sandali Singh 
*/

#include<iostream>
#include<stdio.h>   //for gets() and puts()
using namespace std;

class Employee{
    int EmpNumber;
    char EmpName[20];

    public:
        void getdata(); //Inputs data from user
        void display(); //Displays the Employee data
};

void Employee :: getdata(){
    cout<<"Enter Employee Details\nEmployee Number:\t";
    cin>>EmpNumber;
    fflush(stdin);
    cout<<"Employee Name:\t";
    gets(EmpName);
}

void Employee :: display(){
    cout<<"\nEmployee Number:\t"<<EmpNumber;
    cout<<"\nEmployee Name:\t";
    puts(EmpName);
}

int main(){
    Employee S[6];
    
    for(int i = 0; i < 6; i++){
        S[i].getdata();
    }

    for(int i = 0; i < 6; i++){
        S[i].display();
    }

    return 0;
}