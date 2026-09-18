#include<iostream>
using namespace std;

int main(){
    
    // two diamensional array directly inside the stack : 

    // int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<A[i][j];
    //     }
    // }

    // Array of pointer inside the stack:

    int *A[3];
    A[0]=new int[4];
    A[1]=new int[4];
    A[2]=new int[4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            A[i][j]=i*j;
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<A[i][j]<<endl;
        }
    }

    for(int i=0;i<3;i++){
        delete[] A[i];
    }

    cout<<A[0][1];
}