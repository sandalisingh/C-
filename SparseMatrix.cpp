// Program to implement Sparse Matrix using array and print it.
//Sandali Singh 

#include<iostream>
using namespace std;
const int N = 4;

class Matrix{
    
    int A[N][N];
    
    public:
        
        void inputMatrix();
        void outputMatrix();
        int checkSparse();
        void displaySparse(int);

};

void Matrix :: inputMatrix() {
    cout<<"\nEnter matrix elements(row-wise):\n";
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<"A["<<i<<"]["<<j<<"] = \t";
            cin>>A[i][j];
        }
    }
}

void Matrix :: outputMatrix (){
    cout<<"\nMATRIX\n";
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int Matrix :: checkSparse(){
    int zeroCount = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i][j] == 0){
                zeroCount++;
            }
            if(zeroCount > (N*N)/2 ){
                return zeroCount;
            }
        }
    }
    return -1;
}

void Matrix :: displaySparse(int zeroCount){
    int size = (N*N) - zeroCount;
    int Sparse[3][size];
    for(int i = 0, k = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i][j] != 0){
                Sparse[0][k] = i;
                Sparse[1][k] = j;
                Sparse[2][k++] = A[i][j];
            }
        }
    }
    cout<<"\nSPARCE MATRIX\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < size; j++){
            cout<<Sparse[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    Matrix A;
    A.inputMatrix();
    A.outputMatrix();

    int zeroCount = A.checkSparse();
    if( zeroCount != (-1) ){
        cout<<"\nThe given matrix is SPARSE MATRIX!";
        A.displaySparse(zeroCount);
    }else{
        cout<<"\nThe given matrix is NOT SPARSE MATRIX!";
    }

    return 0;
}
