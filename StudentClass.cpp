/*
Print your personal details name, surname(Single character), total marks, gender(M/F),
result(P/F) by taking input from the user

Sandali Singh 
*/

#include<iostream>
using namespace std;

class Student{
    char name[20], surname;
    float marks[5];
    char gender;

    public:
        void input();   //inputs student details
        void display(); //displays student details
        char result();  //calculates result of the student: Pass or Fail

};

void Student :: input(){
    cout<<"Enter Student Details\nName:\t";
    cin>>name;
    cout<<"Surname:\t";
    cin>>surname;
    
    for(int i = 1 ; i <= 5; i++){
        cout<<"Enter Marks in Subject "<<i<<":\t";
        cin>>marks[i];
    }
    
    cout<<"Gender(M/F):\t";
    cin>>gender;

};

void Student :: display(){
    cout<<"\nStudent Details\nName:\t"<<name;
    cout<<"\nSurname:\t"<<surname;
    cout<<"\nGender(M/F):\t"<<gender;
    cout<<"\nResult(P/F):\t"<<Student::result();
};

char Student :: result(){
    float Total = 0;
    for(int i = 1; i <= 5; i++){    //Calculates Total Marks
        Total += marks[i];
    }

    if(Total > 200){    //If Total Marks are greater than 200 then the student has PASS
        return 'P';
    }else{  //Total is less than or equal to 200, Student has FAILED
        return 'F';
    }
};

int main(){

    Student S;
    S.input();
    S.display();

    return 0;
}