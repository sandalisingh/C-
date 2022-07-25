#include<iostream>

using namespace std;

class space{
    int x, y, z;

    public:
        space(){
            x = y = z = 0;
        }
        space(int, int, int);
        //void getdata(int,int,int);
        void display(void);

        void operator-();
        void operator --(); //predecreement
        void operator ++(); //preincreement
        void operator ++(int);  //postincreement
        void operator --(int);  //postdecreement
};

space :: space(int a, int b, int c){
    x = a;
    y = b;
    z = c;
}

void space :: display(){
    cout<<"S:\t";
    cout<<x<<"\t";
    cout<<y<<"\t";
    cout<<z<<"\n";
}

void space :: operator-(){
    x = -x;
    y = -y;
    z = -z;
}

void space :: operator--(){ //predecreement
    --x;
    --y;
    --z;
}

void space :: operator++(){ //preincreement
    ++x;
    ++y;
    ++z;
}

void space :: operator ++(int){   //post increement
    x++;
    y++;
    z++;
}

void space :: operator --(int){   //post decreement
    x--;
    y--;
    z--;
}

int main(){
    
    space s(-12,-34,+56);
    s.display();
    
    cout<<"\nUNARY -:\n";
    -s;
    s.display();
    
    cout<<"\nPRE DECREEMENT:\n";
    --s;
    s.display();
    
    cout<<"\nPRE INCREEMENT:\n";
    ++s;
    s.display();
    
    cout<<"\nPOST INCREEMENT:\n";
    s++;
    s.display();
    
    cout<<"\nPOST DECREEMENT:\n";
    s--;
    s.display();
 
    return 0;
}