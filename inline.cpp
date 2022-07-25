/*
Sandali Singh

OOPs Assignemmt Q7

*/

#include<iostream>
using namespace std;

class Calc{
    public:
    float add(float a, float b);
    float sub(float a, float b);
    float prod(float a, float b);
    float div(float a, float b);
    int mod(int a, int b);
};
inline float Calc::add(float a, float b){
    return (a + b);
}

inline float Calc::sub(float a, float b){
    return (a - b);
}

inline float Calc::prod(float a, float b){
    return (a * b);
}

inline float Calc::div(float a, float b){
    return (a / b);
}

inline int Calc::mod(int a, int b){
    return (a % b);
}


int main(){
    char ch = 'y';
    do{
        int k;
        cout<<"\n\nMENU : (1)Add (2)Subtract (3)Multiply (4)Divide (5)Modulus";
        cout<<"\nEnter your choice (1-5) : ";
        cin>>k;
        Calc S;
        switch(k){
            case 1 : {
                float a, b;
                cout<<"\nEnter operands : ";
                cin>>a>>b;
                cout<<"\nAnswer : "<<S.add(a,b);
            }   break;
            case 2 : {
                float a, b;
                cout<<"\nEnter operands : ";
                cin>>a>>b;
                cout<<"\nAnswer  : "<<S.sub(a,b);
            }   break;
            case 3 : {
                float a, b;
                cout<<"\nEnter operands : ";
                cin>>a>>b;
                cout<<"\nAnswer  : "<<S.prod(a,b);
            }   break;
            case 4 : {
                float a, b;
                cout<<"\nEnter operands : ";
                cin>>a>>b;
                cout<<"\nAnswer  : "<<S.div(a,b);
                
            }   break;
            case 5 : {
                int a, b;
                cout<<"\nEnter operands : ";
                cin>>a>>b;
                cout<<"\nAnswer  : "<<S.mod(a,b);
            }   break;
            default : cout<<"\nWrong choice!";
        }
        cout<<"\nDo you wish to continue?(y/n) \t";
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');
    return 0;
}