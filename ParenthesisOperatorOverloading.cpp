/*
Sandali Singh


OOPs 
Demonstrate the overloading of '()' operators. 
*/

#include <iostream>
using namespace std;

class Calc{
        int sum;
   
    public:
        Calc(){ //CONTRUCTOR
            sum = 0;
        }

        Calc(int x){    //PARAMETRIZED CONTRUCTOR
            sum = x;
        }
        
        void display(){
            cout<<"SUM = "<<sum;
        }

        int getSum(){
            return sum;
        }

        void setSum(int s){
            sum = s;
        }

        void operator () (int a, int b, int c){ //() OVERLOADING
            sum = a + b + c;
        }

        Calc operator , (Calc o){   //, OVERLOADING
            Calc temp( 10 * getSum() * o.getSum());
            return temp;
        }
};

int main(){
    Calc ob1(10), ob2(5), ob3;
  
    cout<<"\nob1\t";    ob1.display();
    cout<<"\nob2\t";    ob2.display();
    cout<<"\nob3\t";    ob3.display();
    
    ob1(10,2,37);   //() OPERATOR OVERLOADING //10+2+37 = 49 = sum
    cout<<"\n\nPARENTHESIS OPERATOR OVERLOADING";
    cout<<"\nob1\t";    ob1.display();    //sum = 49
    
    cout << "\n\nCOMMA OPERATOR OVERLOADING" <<endl;
    ob3 = (ob1,ob2);  //, OPERATOR OVERLOAdING   //
    cout<<"\nob3\t";    ob3.display();
  
    return 0;
}