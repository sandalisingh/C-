//WAP to show single inheritance.

#include <iostream>
using namespace std;

class Person{
    protected:
    
        string Name;
        int Age;

    public:
        Person(string, int);
};

Person :: Person(string name, int age){
    Name = name;
    Age = age;
}

class Student : public Person{

        string AdmissionNumber;

    public:
        Student(string, string, int);
        void Display();
};

Student :: Student(string AdmNo, string name, int age) : Person(name, age){
    AdmissionNumber = AdmNo;
}

void Student :: Display(){
    cout<<"\nAdmission No = "<<AdmissionNumber;
    cout<<"\nName = "<<Name;
    cout<<"\nAge = "<<Age;
}

int main(){
    Student S("2K21", "Anjali", 5);
    S.Display();

    return 0;
}