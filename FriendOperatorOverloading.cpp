#include<iostream>

using namespace std;

class space{
    int x, y, z;
    int a[3];

    public:
        space(){
            x = y = z = 0;
        }
        space(int,int,int);
        void display(void);
        friend space operator+(space&, space&); //pass by refrence becuz changes hv to be reflected
        friend space operator -(space&);
        void assign(int x, int y, int z){
            a[0] = x;
            a[1] = y;
            a[2] = z;
        }
        int & operator [] (int i) {
            return a[i];
        }
        /*int operator[](int i){
            return a[i];
        }*/
};

space operator -(space& s){ //UNARY MINUS
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
    return s;
}

space operator +(space& s1, space& s2){ //ADDITION OF 2 OBJECTS
    space s3;

    s3.x = s1.x + s2.x;
    s3.y = s1.y + s2.y;
    s3.z = s1.z + s2.z;

    return s3;
}

space :: space(int a, int b, int c){
    x = a;
    y = b;
    z = c;
}

void space :: display(){
    //cout<<"S:\t";
    cout<<x<<"\t";
    cout<<y<<"\t";
    cout<<z<<"\n";
}

int main(){
    /*
    space s1(-12,-34,+56);
    cout<<"\nS1 :\t";
    s1.display();
    
    -s1;    //UNARY MINUS
    cout<<"\nS1 = -S1 :\t";
    s1.display();
    
    space s2(2, -100, 9);
    cout<<"\nS2 :\t";
    s2.display();
    
    -s2;    //UNARY MINUS
    cout<<"\nS2 = -S2 :\t";
    s2.display();
    
    space s3 = s1 + s2; //ADDITION
    cout<<"\nS3 = S1 + S2 :\t";
    s3.display();*/
    space s(-12,-34,+56);
    s.assign(1,2,3);
    cout<<s[1]<<"\n";
    s[1] = 25;
    cout<<s[1];
    
    return 0;
}