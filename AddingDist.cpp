#include<iostream>
using namespace std;

class DM;
class DB;
DM add(DM, DB);

class DM
{	public:
        int m, cm;
        DM(int meter, int centi){
            m = meter;
            cm = centi;
        }
        void display();
        friend DM add(DM, DB);
};

class DB
{	public:
        int f, i;
        DB(int feet, int inch){
            f = feet;
            i = inch;
        }
        void display();
        friend DM add(DM, DB);
};

void DM :: display(){
    cout<<"\nDISTANCE : "<<m<<" m "<<cm<<" cm ";
}

void DB :: display(){
    cout<<"\nDISTANCE : "<<f<<" feet "<<i<<" inch ";
}

DM add(DM d1, DB d2){
	int metres = d1.m + 0.3048*d2.f ;
    int centi = d1.cm + 2.54*d2.i;
    metres += centi/100;
    centi = centi%100;
    DM sum(metres, centi);
    return sum;
} 

int main(){
    DM d1(12, 23);
    DB d2(42, 11);
    d1.display();
    d2.display();
    DM sum = add(d1, d2);
    sum.display();
    return 0;
}
