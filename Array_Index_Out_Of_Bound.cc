// exceptions: multiple catch blocks
#include <iostream> 
using namespace std;

int main () { 
    try {
        char * mystring;
        mystring = new char [10];

        if (mystring == NULL) 
            throw "\nAllocation failure\n"; 

        for (int n=0; n<=100; n++) {
            if (n>9) 
                throw n;
            mystring[n]='z'; 
        }
    } catch (int i) {
        cout << "\nException: ";
        cout << "index " << i << " is out of range\n\n"; 
    } catch (char * str) {
        cout << "\nException: " << str << endl; 
    }

    return 0; 
}