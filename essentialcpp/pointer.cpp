#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    // int a=10;
    // int *p;
    // p=&a;
    // cout<<*p<<endl; 
    // cout<<p<<endl;
    // cout<<&a<<endl;
    // printf("%d",p);
    // return 0;   
    // pointer to an array
    // int A[5]={2,4,6,8,10};
    // int *p;
    // p=A;
    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }

    // int *p;
    // p= new int[5];
    // p[0]=1;
    // p[1]=2;
    // p[2]=3;
    // p[3]=4;
    // p[4]=5;

    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }
    // delete [ ] p;

    struct rectangle{
        int lenght;
        int breadth;
    };

    struct rectangle *p;
    p=new rectangle;
    p->lenght=15;
    p->breadth=10;
    cout<<p->lenght<<endl;
    cout<<p->breadth<<endl;
    return 0;

}