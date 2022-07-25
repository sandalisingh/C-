//Complex Number Addition 
//Sandali Singh 

#include<iostream>
using namespace std;

class ComplexNo{
    float real, img;

    public:
        ComplexNo(float, float);
        ComplexNo();

        void input();   //Inputs real & imaginary part of the complex no from user
        void display();

        friend ComplexNo operator +(ComplexNo a1, ComplexNo a2);   //adds 2 complex numbers
};

ComplexNo :: ComplexNo(float r, float i){
    real = r;
    img = i;
}

ComplexNo :: ComplexNo(){
    real = 0;
    img = 0;
}

void ComplexNo :: input(){
    cout<<"\nComplex Number\nReal:\t";
    cin>>real;
    cout<<"\nImaginary:\t";
    cin>>img;
}

ComplexNo operator +(ComplexNo a1, ComplexNo a2){

    float sum_real = a1.real + a2.real;
    float sum_img = a1.img + a2.img;

    ComplexNo C(sum_real, sum_img);

    return C;
}

void ComplexNo :: display(){
    cout<<"\nComplex No =\t"<<real<<" + ( "<<img<<" )i";
}

int main(){
    ComplexNo C1, C2;

    C1.input();
    C2.input();

    C1.display();
    C2.display();

    ComplexNo Sum = C1+C2;
    Sum.display();

    return 0;
}