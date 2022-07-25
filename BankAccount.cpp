#include<iostream>
#include<math.h>
using namespace std;
class balance
{
    
    float rate;
    static float int_bal;
    public :
 
        balance() // constructor , initialise the value of initial balance and rate (these inputs are taken from the user)
        {
            cout<<"Enter the initial balance - ";
            cin>>int_bal;
            cout<<"Enter the rate of interest - ";
            cin>>rate;
        }
        ~balance() // destructor
        {
            cout<<"Destructor was called"<<endl;
        }

        void deposit( )
        {
            float dep;
            cout<<"Enter the amount to be be deposited - ";
            cin>>dep;
            int_bal = int_bal + dep;
            cout<<"The current balance is - "<<int_bal <<endl;;
        }
        void withdraw()
        {
            int amt;
            cout<<"Enter the amount to be withdrawn - ";
            cin>>amt;
            int_bal = int_bal - amt;
            cout<<"The current balance is - "<<int_bal<<endl;
        }
        void compound()
        {
            float time;
            cout<<"Enter the time in years - ";
            cin>>time;
            float temp = pow((1+rate/100) , time );

            int_bal = int_bal* temp;
            cout<<"The current balance is - "<<int_bal<<endl;
        }
        void getBalance()
        {
            cout<<"The current balance is - "<<int_bal;
        }
        void menu()
        {
            int ch;
            do
            {
            cout<<"Menu - "<<endl;
            cout<<"1. Deposit"<<endl;
            cout<<"2. Withdraw "<<endl;
            cout<<"3. Compound "<<endl;
            cout<<"4. Display the balance "<<endl;
            cout<<"5. Exit"<<endl;
            cout<<"Enter your choice - ";
            cin>>ch;
            switch( ch)
            {
                case 1 :
                deposit();
                break;
                case 2: 
                withdraw( );
                break;
                case 3: 
                compound( );
                break;
                case 4: 
                getBalance();
                break;
                default :
                cout<<"Wrong input !"<<endl;;
            }

            } while( ch!= 5);
        }
};

//float balance :: int_bal;
int main()
{
    balance b;
    b.menu();
    return 0;
}