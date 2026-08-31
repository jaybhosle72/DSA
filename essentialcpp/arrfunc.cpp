#include<iostream>
#include<stdio.h>
using namespace std;
//  void fun(int A[],int n){
//     A[0]=25;
//     cout<<A[0];
//  }

//  int main(){
//     int A[5]={2,4,6,8,10};
//     cout<<A[0]<<endl;
//     fun(A,5);

//  }
// void func(int A[],int n){
//     for(int i=0;i<n;i++){
//         cout<<A[i]<<" ";
//     }
// }
// int main(){
//     int A[]={1,3,5,7,9};
//     int n=5;
//     func(A,5);
//     return 0;
// }

int * fun(int size){
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;
}


int main(){
    int *ptr,sz=7;
    ptr=fun(sz);
    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<" ";
    }
    return 0;

}