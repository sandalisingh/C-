//WAP to check if two numbers are equal without using == operator.

#include <iostream>
using namespace std;

bool isEqual(int x, int y){
    if(x ^ y){      //xor returns 1 when both are equal ie x!=y
        return false;
    }else{          //xor returns 0 when both are equal ie x=y
        return true;
    }
}

int main(){
    int x, y;

    cout<<"\nx = ";
    cin>>x;

    cout<<"\ny = ";
    cin>>y;

    if(isEqual(x,y)){
        cout<<"\n x is equal to y !";
    }else{
        cout<<"\n x is NOT equal to y !";
    }
}