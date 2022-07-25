#include <iostream>
using namespace std;

int main() {
    long long Left, Right;
    
    // cout<<"\nLeft = ";
    std::cin>>Left;

    // cout<<"\nRight = ";
    std::cin>>Right;

    std::cout<<"YES\n";
    for( ; Left <= Right; Left = Left + 2) {
        std::cout<<(Left)<<" "<<(Left+1)<<"\n";
    }

    return 0;
}