/*
BANKING SYSTEM

Sandali Singh
*/
#include<iostream>
#include<math.h>
using namespace std;

class Account{
    float bal;
    float rate;

    public:
        Account(float init_bal, float r){    //initialise balance and rate of interest
            bal = init_bal;
            rate = r;
        }    
        ~Account(){ //destroy class object
            cout<<"\nAccount object DESTRUCTED!";
        }   
        void Deposit(float amt){
            bal = bal + amt;
        }
        void Withdraw(float amt){
            bal = bal - amt;
        }
        float Compound(float t){
            return ( ( bal * pow( (1 + rate/100.00) , t )) - bal );
        }
        float getBalance(){
            return bal;
        }
        void Menu();
};

void Account :: Menu(){
    cout<<"\nMENU\t1.Deposit\t2.Withdraw\t3.Compound Interest\t4.Balance";
    cout<<"\nEnter you choice(1-4):\t";
    int k;
    cin>>k;

    switch(k){
        case 1: {
                    cout<<"\nEnter the amount to be deposited:\tRs. ";
                    int amt;
                    cin>>amt;
                    Deposit(amt);
                    cout<<"\nRs. "<<amt<<" has been DEPOSITED successfully!";
                }
                break;

        case 2: {
                    cout<<"\nEnter the amount to be withdrawn:\tRs. ";
                    int amt;
                    cin>>amt;
                    if(amt <= getBalance()){
                        Withdraw(amt);
                        cout<<"\nRs. "<<amt<<" has been WITHDRAWN!";
                    }else{
                        cout<<"\nNOT ENOUGH BALANCE in your account!";
                    }
                    
                }
                break;

        case 3: {
                    cout<<"\nEnter time(years):\t";
                    int t;
                    cin>>t;
                    cout<<"\nCOMPOUND INTEREST=\tRs. "<<Compound(t);
                }
                break;

        case 4: {
                    cout<<"\nBALANCE:\tRs. "<<getBalance();
                }
                break;

        default: cout<<"\nWRONG INPUT!";
    }
}

int main(){
    int bal, rate;
    cout<<"\nEnter initial balance:\tRs. ";
    cin>>bal;
    cout<<"\nEnter rate of interest:\t(%) ";
    cin>>rate;

    Account P = Account(bal, rate);
    char ans = 'y';
    do{
        P.Menu();
        cout<<"\nDo you wish to continue?(y/n):\t";
        cin>>ans;
    }while(ans == 'y' || ans == 'Y');

    return 0;
}