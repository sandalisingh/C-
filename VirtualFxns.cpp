/*

OOPs Q12
Sandali Singh


*/

#include <iostream>
using namespace std;

class c_polygon{
    public:
        c_polygon() {
            cout<<"\n-> POLYGON()";
        }

        // VIRTUAL FUNCTION
        virtual void area(){
            cout<<"\nVIRTUAL !! Area of polygon!\n";
        }

        void fxn() {
            cout<<"\nPolygon.fxn()\n";
        }

        ~ c_polygon() {
            cout<<"\n~ POLYGON()";
        }
};

class c_rectangle : public c_polygon{
    int l, b;
    public:
        c_rectangle(int l = 1, int b = 1){
            cout<<"\n-> RECTANGLE()";
            this->l = l;
            this->b = b;
        }

        void area();

        void fxn() {
            cout<<"\nReactangle.fxn()\n";
        }

        ~ c_rectangle() {
            cout<<"\n~ RECTANGLE()";
        }
};

class c_triangle : public c_polygon{
    int b, h;
    public:
        c_triangle(int,int);
        void area();

        void fxn() {
            cout<<"\nTriangle.fxn()\n";
        }

        ~ c_triangle() {
            cout<<"\n~ TRIANGLE()";
        }
};

c_triangle :: c_triangle(int b, int h){
    cout<<"\n-> TRIANGLE()";
    this->b = b;
    this->h = h;
}

void c_rectangle :: area(){
    int area = (l * b);
    cout<<"\nAUNTOMATICALLY VIRTUAL !!\nArea of Reactangle = "<<area;
}

void c_triangle :: area(){
    int area = (b * h) / 2;
    cout<<"\nAUNTOMATICALLY VIRTUAL !!\nArea of Triangle = "<<area;
}

int main(){
    c_rectangle R(12,30);
    R.area();       //virtual
    R.fxn();    //NON virtual

    // c_triangle T(12,30);
    // T.area();

    cout<<"\n\nUSING POINTER\n";

    c_polygon *B;
    c_rectangle d;
    B = &d;
  
    // Virtual function, binded at runtime
    cout<<"\n\n1. late binding/runtime - location of pointer";
    B->area();
  
    // Non-virtual function, binded at compile time
    cout<<"\n\n2. early binding/compile time - type of pointer";
    B->fxn();
    

    return 0;
}