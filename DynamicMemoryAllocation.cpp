//use classes to allocate object's memory using dynamic memory allocation
//Sandali Singh

#include<iostream>
using namespace std;

class Dynamic{
    int *a;
    public :
        Dynamic(){
            cout<<"\nCONSTRUCTOR";
            a = new int[3];
        }
        void set(int x, int y, int z){
            a[0] = x;
            a[1] = y;
            a[2] = z;
        }
        void show(){
            cout<<"\n"<<a[0]<<" "<<a[1]<<" "<<a[2];
        }
        ~Dynamic(){
            cout<<"\nDESTRUCTOR";
            delete[] a;
        }
};

int main(){
    Dynamic D;
    D.set(10,20,15);
    D.show();
    return 0;
}