/*
Write a C++ program to swap two number by both call by value and call by
reference mechanism, using two functions swap_value() and swap_reference
respectively , by getting the choice from the user and executing the user’s
choice by switch-case.

Sandali Singh

OOPs Lab Exp 3
*/

#include<iostream>
using namespace std;

void swap_value(int a, int b){
    cout<<"\nSWAP BY VALUE...\n";
    int temp = a;
    a = b;
    b = temp;
}

void swap_reference(int &a, int &b){
    cout<<"\nSWAP BY REFERENCE...\n";
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

    int k;
    cout<<"SWAP\t1.By value\t2.By reference";
    cout<<"\nEnter your choice(1/2):\t";
    cin>>k;

    switch(k){
        case 1: {
                    swap_value(a, b);
                    cout<<"\na = "<<a;
                    cout<<"\nb = "<<b;
                }
                break;

        case 2 : {
                    swap_reference(a, b);
                    cout<<"\na = "<<a;
                    cout<<"\nb = "<<b;
                }
                break;

        default : cout<<"\nWRONG CHOICE!";
    }

    return 0;
}