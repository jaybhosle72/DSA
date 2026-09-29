#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void leftshift(struct Array *arr){
    for(int i=0;i<arr->length;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=0;
}

void leftrota(struct Array *arr){
    int temp =arr->A[0];
    for(int i=0;i<arr->length;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=temp;
}

void rightshift(struct Array *arr){
    for(int i=arr->length-1;i>=0;i--){
        arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=0;
}

void rightrota(struct Array *arr){
    int temp=arr->A[arr->length-1];
    for(int i=arr->length-1;i>=0;i--){
        arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=temp;
}

int main(){
    struct Array arr;
    cout<<"enter size and length of array :"<<endl;
    cin>> arr.size >> arr.length ;
    arr.A=new int[arr.size];
    cout<<"enter elements : "<<endl;
    for(int i=0;i<arr.length;i++){
        cin>>arr.A[i];
    }

    //leftshift(&arr);
    //leftrota(&arr);
    //rightshift(&arr);
    rightrota(&arr);
    cout<<"after right shift :"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }


}