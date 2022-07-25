/*
Sandali Singh
*/

#include <iostream>
using namespace std;
  
// Comma class
class comma {
    int x, y;
  
public:
    comma() {}
  
    comma(int X, int Y)
    {
        x = X;
        y = Y;
    }
  
    void display()
    {
        cout << "\nx =" << x << "\t";
        cout << "y =" << y ;
    }
  
    comma operator,(comma ob){
        comma temp;
    
        temp.x = ob.x;
        temp.y = ob.y;
    
        cout << "\nx =" << ob.x << "\t"
            << "y =" << ob.y << endl;
    
        return temp;
    }
};
  

int main()
{
    comma ob1(10, 20), ob2(5, 30), ob3;
  
    ob1.display();
    ob2.display();
    ob3.display();
  
    
    cout << "\n\nCOMMA OPERATOR OVERLOADING" <<endl;
    ob3 = ob1,ob2;
    ob3.display();
  
    return 0;
}