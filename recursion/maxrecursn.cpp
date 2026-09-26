#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    cout<<"elements are :"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

int max(struct Array arr,int n){
    static int m=arr.A[0];
    if(n<arr.length){
        if(m<arr.A[n+1]){
            m=arr.A[n+1];
        }
        max(arr,n+1);
    }
    return m;
}


int main(){
    struct Array arr;
    cout<<"enter the size and length of array :"<<endl;
    cin>>arr.size >> arr.length;
    arr.A=new int[arr.size];
    cout<<"enter elements :"<<endl;
    for(int i=0;i<arr.length;i++){
        cin>>arr.A[i];
    }

    display(arr);
    cout<<"max element is : "<<max(arr,0);



}