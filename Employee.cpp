/*
Employee Class 

Sandali Singh
*/

#include <iostream>
#include <stdio.h>   //for gets() and puts()
#include <char.h>

using namespace std;

class Employee{
    public:
        char name[25];
        char emp_id[5];
        float basic_sal;
};

class Derived: public Employee{
    //float HRA, DA;
    public:
        Derived(char[], char[], float);
        float calc_grossPay();   
        float calc_netPay();
};

Derived :: Derived(char n[], char id[], float b_sal){
    strcpy(name , n);
    strcpy(emp_id , id);
    basic_sal = b_sal;
    //HRA = basic_sal * 0.2;  //HRA = 20% of basic salary
    //DA = basic_sal * 0.52;  //DA = 52% of Basic
}

float Derived :: calc_grossPay(){   //total
    float gross_sal = basic_sal * 1.72; //Gross salary = Basic salary + HRA + Other Allowances
    return gross_sal;
}

float Derived :: calc_netPay(){ 
    float gross_sal = calc_grossPay();
    //float IT = gross_sal * 0.3;   //Income Tax = 30% of the gross salary
    float net_sal = gross_sal * 0.7; //Net salary = Gross salary – Income tax
    return net_sal;
}

int main(){
    char name[25], id[5];
    float basicSal;
    
    //TAKING INPUT FROM THE USER

    cout<<"\nEMPLOYEE";
    cout<<"\nName = ";
    fflush(stdin);
    gets(name);
    cout<<"Employee ID = ";
    fflush(stdin);
    gets(id);
    cout<<"Basic Salary = ";
    cin>>basicSal;
    
    Derived E = Derived(name, id, basicSal);
    
    //DISPLAYING THE OBJECT OF DERIVED CLASS

    cout<<"\n\nEMPLOYEE";
    cout<<"\nName = ";
    puts(E.name);
    cout<<"Employee ID = ";
    puts(E.emp_id);
    cout<<"Basic Salary = "<<E.basic_sal;
    
    cout<<"\nGross Salary = Rs. "<<E.calc_grossPay();
    cout<<"\nNet Salary = Rs. "<<E.calc_netPay();
    
    return 0;
}