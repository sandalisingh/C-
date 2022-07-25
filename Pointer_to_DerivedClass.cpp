//pointers to the derived class objects

#include<iostream>
using namespace std;

class Base{
    int i;
    public:
        void seti(int x){
            i = x;
        }
        void showi(){
            cout<<"BASE i = "<<i<<endl;
        }
};

class Derived : public Base{
    int j;
    public:
        void set(int x, int y = 20){
            j = x;
            seti(y);
        }
        void show(){
            cout<<"DERIVED j = "<<j<<endl;
            showi();
        }
};

int main(){
    Base *ptrB = new Derived;
    cout<<"\n\nBase class pointer pointing to dervied class object\n";
    //ptr->set(10); //compiler gives error
    //ptr->show();    //compiler gives error
    ptrB->seti(10);
    ptrB->showi();

    Derived *ptrD = new Derived;
    cout<<"\n\nDerived class pointer pointing to dervied class object\n";
    ptrD->set(50);
    ptrD->show();
    ptrD->seti(5);  
    ptrD->showi();
    return 0;
}