/*
Sandali Singh

OOPs Assignemmt Q11

*/

#include <iostream> 
using namespace std;

class pntr_obj {
    string name; 
    int roll_no;
    public:
        // default constructor
        pntr_obj();
        // parameterised constructor
        pntr_obj(string name, int roll_no);

        void setdata(string name, int roll_no);
        void print();
};

pntr_obj :: pntr_obj()
{
    roll_no = 0;
    name = "Blank";
}

pntr_obj :: pntr_obj(string name, int roll_no)
{
    this -> roll_no = roll_no;
    this -> name = name;
}

void pntr_obj :: setdata(string name, int roll_no) {
    this -> roll_no = roll_no;
    this -> name = name;
}

void pntr_obj :: print() {
    cout << "Entered Name is " << this->name << endl; 
    cout << "Entered Roll No is " << this->roll_no << endl; 
    cout << endl;
} 

int main() {
    pntr_obj object_1;
    pntr_obj object_2("Sandali", 107);
    pntr_obj object_3;

    object_1.setdata("Singh", 101); 

    object_1.print(); 
    object_2.print();
    object_3.print();

    return 0; 
}