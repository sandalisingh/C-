/*
Sandali Singh

*/

#include<iostream>
using namespace std;

//----------------------------------C L A S S E S--------------------------------------

class person{
    private:
        string name;
        int code;

    public:
        person(string s, int c){
            name = s;
            code = c;
            cout<<"\nPerson constructor called";
        }
        void display();
        void updateName(string);
        void updateCode(int);
};

class account: virtual public person{
    private:
        int pay;

    public:
        account(string s, int c, int p):person(s, c){
            pay = p;
            cout<<"\nAccount constructor called";
        }
        void display();
        void updatePay(int);
};

class admin: virtual public person{
    private:
        int experience;

    public:
        admin(string s, int c, int exp):person(s, c){
            experience = exp;
            cout<<"\nAdmin constructor called";
        }
        void display();
        void updateExp(int);
};

class master: public account, public admin{
    public:
        master(string s, int c, int p, int exp):account(s,c,p),admin(s,c,exp),person(s, c){
            cout<<"\nMaster constructor called";
        }
        void update();
        void display();
};

//----------------------------------PERSON FXNS--------------------------------------

// person :: person(string s, int n){
//     name = s;
//     code = n;
// }

void person :: display(){
    cout<<"\nName = "<<name;
    cout<<"\nCode = "<<code;
}

void person :: updateName(string s){
    name = s;
}

void person :: updateCode(int n){
    code = n;
}

//----------------------------------ACCOUNT FXNS--------------------------------------

// account :: account(int n){
//     pay = n;
// }

void account :: display(){
    cout<<"\nPay = "<<pay;
}

void account :: updatePay(int n){
    pay = n;
}

//----------------------------------ADMIN FXNS--------------------------------------

// admin :: admin(int n){
//     experience = n;
// }

void admin :: display(){
    cout<<"\nExperience = "<<experience;
}

void admin :: updateExp(int n){
    experience = n;
}

//----------------------------------MASTER FXNS--------------------------------------

// master :: master(){

//     person(n, c);
//     account(p);
//     admin(exp);
// }

void master :: update(){
    //this->display();
    cout<<"\n\nUPDATE DETAILS";
    string n;
    int c, p, exp;
    cout<<"\nName = ";
    cin>>n;
    cout<<"\nCode = ";
    cin>>c;
    cout<<"\nPay = ";
    cin>>p;
    cout<<"\nExperience = ";
    cin>>exp;

    updateName(n);
    updateCode(c);
    updatePay(p);
    updateExp(exp);
}

void master :: display(){
    cout<<"\n\nMASTER dETAILS";
    person::display();
    account::display();
    admin::display();
}

int main(){
    //master M;
    string n;
    int c, p, exp;

    cout<<"\nName = ";
    cin>>n;
    cout<<"\nCode = ";
    cin>>c;
    cout<<"\nPay = ";
    cin>>p;
    cout<<"\nExperience = ";
    cin>>exp;
    master M(n,c,p,exp);
    M.display();
    M.update();
    M.display();
    return 0;
}