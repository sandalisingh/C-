// #include <iostream>
// using namespace std;

// template<class T>
// pair<T,T> Find_Min_max(T A[], int size){
//     T maximum = A[0];
//     T minimum = A[0];
    
//     for(int i = 1 ; i < size; i++){
//         if(maximum < A[i]){
//             maximum = A[i];
//         }
//         if(minimum > A[i]){
//             minimum = A[i];
//         }
//     }

//     pair<T,T> P;
    
//     P.first = minimum;
//     P.second = maximum;

//     return P;
// }


// int main(){
//     int A[]={12, 23, 1, 0, -10};

//     pair<int,int> P = Find_Min_max(A, 5);

//     cout<<"\nMIN = "<< P.first;
//     cout<<"\nMAX = "<< P.second;

//     return 0;
// }




#include<iostream>
using namespace std;

template <typename T>
class pair_class{
        T var1;
        T var2;

    public:

        pair_class(T a, T b){
            this->var1=a;
            this->var2=b;
        }
        
        T get_max(){
            if(var1>var2){
                return var1;
            }else{
                return var2;
            }
        }
};

int main(){
    char b='b';
    char c='c';

    pair_class<char> a(b,c);
    pair_class<int> i(1,3);

    char res1=a.get_max();
    int res2=i.get_max();

    cout<<"Greater of the two characters b and c is "<<res1<<endl;
    cout<<"Greater of the two integers 1 and 3 is "<<res2<<endl;

    return 0;
}