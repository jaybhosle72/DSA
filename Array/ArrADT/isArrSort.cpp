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

void insert(struct Array *arr,int num){
    if(arr->length<arr->size){
        int i=0;
        for( i;i<arr->length;i++){
            if(arr->A[i]<num && num<arr->A[i+1]){
                for(int j=arr->length;j>i+1;j--){
                    swap(arr->A[j],arr->A[j-1]);
                }
                arr->A[i+1]=num;
                arr->length=arr->length+1;
                break;
                
            }
        }
        
    }
    
}

void display(struct Array *arr){
    for(int i=0;i<arr->length;i++){
        cout<<arr->A[i]<<endl;
    }
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

    cout<<"before inserting :",display(&arr);
    insert(&arr,3);

    cout<<"after inserting :",display(&arr);
    issorted(&arr);
}