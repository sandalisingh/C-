#include <iostream>
using namespace std;

float CheckDenominator(float den) {
    if (den == 0) 
        throw "Error";
    else
        return den;
}

int main() {
    float numerator, denominator, result; 
    cout<<"\nEnter the numerator and denominator : "; 
    cin>>numerator;
    cin>>denominator;
    
    try {
        if (CheckDenominator(denominator)) { 
            result = (numerator / denominator); 
            cout << "\nThe quotient is " << result << endl;
        } 
    } catch (...) {
        cout << "\nException occurred\n\n";
    } 

    return 0;
}