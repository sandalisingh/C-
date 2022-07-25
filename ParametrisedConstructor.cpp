#include<iostream>
using namespace std;
class Inte{
    int m,n;
    public:
    Inte(int a, int b){
        m = a;
        n = b;
    }
    void display(){
        cout<<m<<n;
    }
};

int main(){
    Inte I(1,2);
    I.display();
    return 0;
}