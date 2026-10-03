#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void merging(struct Array *a1,struct Array *a2){
    int i=0,j=0,k=0;
    struct Array *a3=new Array;
    while(i<a1->length && j<a2->length){
        if(a1->A[i] <a2->A[j]){
            a3->A[k]=a1->A[i];
            i++;
            k++;
        }
        else{
            a3->A[k]=a2->A[j];
            j++;
            k++;
        } 
    }
    for(;i<a1->length;i++){
        a3->A[k]=a1->A[i];
        k++;
        i++;
    }
    for(;j<a2->length;j++){
        a3->A[k]=a2->A[j];
        k++;
        j++;
    }

    a3->length=a1->length+a2->length;
    a3->size=10;
    cout<<"after merging : "<<endl;
    for(int i=0;i<a3->length;i++){
        cout<<a3->A[i]<<" ";
    }

}



int main(){
    int arr1[]={3,8,16,20,25};
    int arr2[]={4,10,12,22,23};
    struct Array a1={arr1,5,5};
    struct Array a2={arr2,5,5};
    struct Array *a3;
    cout<<"array 1: "<<endl;
    for(int i=0;i<a1.length;i++){
        cout<<a1.A[i]<<" ";
    }
    cout<<endl;
    cout<<"array 2: "<<endl;
    for(int i=0;i<a2.length;i++){
        cout<<a2.A[i]<<" ";
    }
    merging(&a1,&a2);
    

    
}