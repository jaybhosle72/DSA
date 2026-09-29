#include<iostream>
using namespace std;
struct Array{
    int *A;
    int length;
    int size;
};


// with auxilary array 
// void reverse(struct Array &arr){
//     int *q=new int[arr.size];
//     for(int i=arr.length-1,j=0;i>=0;i--,j++){
//         q[j]=arr.A[i];
//     }
//     for(int i=0,j=0;i<arr.length;i++,j++){
//         arr.A[i]=q[j];
//     }
    
    
//     cout<<"duplicated array :"<<endl;
//     for(int i=0;i<arr.length;i++){
//         cout<<arr.A[i]<<endl;
//     }
// }

//second method , 
void reverse(struct Array *arr){
    int temp=0;
    for(int i=0,j=arr->length-1;i<=j;i++,j--){
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
    cout<<"after reverse : "<<endl;
    for(int i=0;i<arr->length;i++){
        cout<<arr->A[i]<<endl;
    }
}



int main(){
    struct Array arr;
    cout<<"enter size and length of array : "<<endl;
    cin>>arr.size >> arr.length ;
    cout<<"enter elements :"<<endl;
    arr.A = new int[arr.size];
    for(int i=0;i<arr.length;i++){
        cin>>arr.A[i];
    }

    cout<<"before reverse: "<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
    reverse(&arr);
    

}