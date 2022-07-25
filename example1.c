#include <stdio.h>
using namespace std;
int main() {
    int x = 1, i, y = 2;
for (i = 0; i < 5; i++)
{
x << 1;
y = x + i;
}
cout<<x<<"\n"<<y;
return 0;
}