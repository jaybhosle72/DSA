#include<iostream>
using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

int issorted(struct Array *arr){
    for(int i=0;i<arr->length-1;i++){
        if(arr->A[i]>arr->A[i+1]){
            cout<<"not sorted"<<endl;
            return 0;
        }
        
        
    }
    cout<<"sorted"<<endl;
    return 0;
}


int main(){
    struct Array arr;
    cout<<"enter size and length of Array :"<<endl;
    cin>>arr.size >> arr.length;
    arr.A=new int[arr.size];
    cout<<"enter elements :"<<endl;
    for(int i=0;i<arr.length;i++){
        cin>>arr.A[i];
    }

    issorted(&arr);
}