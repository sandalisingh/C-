/*
Sandali Singh

*/

#include<iostream>
using namespace std;

class Absol{
    public:
    void absolute(int& x);
    void absolute(float& x);
};
void Absol::absolute(int& x){
    cout<<"Inside void absolute(int& x)";
    if(x < 0){
        x = -x;
    }
}

void Absol::absolute(float& x){
    cout<<"Inside void absolute(float& x)";
    if(x < 0.0){
        x = -x;
    }
}

int main(){
    Absol S;
    cout<<"\nEnter an integer : ";
    int x;
    cin>>x;
    S.absolute(x);
    cout<<"\nAbsolute = "<<x;
    cout<<"\n\nEnter a floating point number : ";
    float y;
    cin>>y;
    S.absolute(y);
    cout<<"\nAbsolute = "<<y;
}