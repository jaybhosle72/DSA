#include<iostream>
#include<stdlib.h>
using namespace std;

struct arr
{
    int *A;
    int size;
    int length;
};

void display(struct arr arr1)
{
    int i;
    cout<<"elements are :"<<endl;
    for(i=0;i<arr1.length;i++){
        cout<<arr1.A[i]<<endl;
    }
    
}


int main(){
    struct arr arr1;
    int n,i;
    cout<<"enter size of array:";
    cin>>arr1.size;
    arr1.A=new int[arr1.size];
    arr1.length=0;

    
    cout<<"enter all element"<<endl;
    for(i=0;i<arr1.size;i++){
        cin>>arr1.A[i];
    }
    arr1.length=arr1.size;
    display(arr1);
}