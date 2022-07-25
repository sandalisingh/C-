/*

SANDALI SINGH
Write the definition for a class called Distance.

*/

#include <iostream>
using namespace std;

class Distance{
        
    public:
        
        int feet;
        float inch;

        void set(int, float);   //to give value to object
        void display(); //to display distance in feet and inches
        Distance add(Distance); //
};

void Distance :: set(int f, float i){
    feet = f;
    inch = i;
}

void Distance :: display(){
    cout<<"\nDISTANCE =\t"<<feet<<"  feet  "<<inch<<"  inches  ";
}

Distance Distance :: add(Distance d) {
    Distance sum;
    int f = (d.feet + feet);
    float i = (d.inch + inch);
    if(i >= 12){
        i = i - 12; // 1 feet = 12 inches
        f++;
    }
    sum.set(f, i);  //sums up feet and inches of the argument and caller
    return sum;
}

Distance input(){
    int f;
    float i;
    
    cout<<"\nDISTANCE";
    cout<<"\nFeet   = ";
    cin>>f;
    cout<<"Inches = ";
    cin>>i;
    
    Distance d;
    d.set(f, i);
    
    return d;
}

int main(){
    Distance D[3];

    D[0] = input(); //inputs feet and inches from user
    D[1] = input();

    D[2] = D[0].add(D[1]);  // D[2] = D[0] + D[1]

    D[0].display();
    D[1].display();
    D[2].display();

    return 0;
}