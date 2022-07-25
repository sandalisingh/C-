#include <iostream>
using namespace std;

class A{
    public:
        int x;

        A(int d){
            x = d;
        };
        
};


class B {
    public:
        int y;
        A a;
    
        B(int Y) : a(9), y(Y){}
        void show(){
            cout<<"\nx = "<<a.x<<"\ny = "<<y;
        }
};

int main(){
    B b(100);
    b.show();

    return 0;
}