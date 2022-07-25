#include <iostream>
using namespace std;
int main() {
    int x = 1, i, y = 2;
    for (i = 0; i < 5; i++)
    {
        x << 1;
        y = x + i;
        cout<<x<<"\t"<<y<<"\n";
    }
    cout<<x<<"\t"<<y;
    return 0;
}