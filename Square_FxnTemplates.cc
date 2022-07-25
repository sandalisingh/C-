//square of a number using function templates
//sum of array elements usong fxn templates

#include<iostream>
using namespace std;

template<class X> void square(X a){
    cout<<"\nSquare : "<<a*a<<endl;
}

template<class X> void sum(X a[], int n){
    X sum = 0;
    for(int i = 0; i < n ; i++){
        sum += a[i];
    }
    cout<<"\nSUM = "<<sum<<endl;
}

int main(){
    int a = 5;
    double d = 5.5;
    square(a);
    square(d);

    int X[] = {1,2,3};
    sum(X,3);

    float F[] = {1.1,2.2,3.3};
    sum(F,3);

    return 0;
}