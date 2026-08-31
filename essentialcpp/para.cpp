#include<iostream>
#include<stdio.h>
using namespace std;
// call by address
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main (){
    int a,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    swap(&a,&b);
    
    cout<<"after swap :"<<a<<endl<<b;
}
// for call by reference do this only
// void swap(int &x,int &y){ }
