#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array &arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

int total(struct Array &arr,int n){
    if(n>0){
        return total(arr,n-1)+arr.A[n-1];  
    }
    return 0;
    
}


int main(){
    struct Array arr;
    
    cout<<"enter lenght and size of array:"<<endl;
    cin>>arr.length >> arr.size;
    arr.A = new int[arr.size];
    cout<<"enter elements : "<<endl;
    for(int i=0;i<arr.length;i++){
        cin>>arr.A[i];
    }
    cout<<"displaying elements :"<<endl;
    display(arr);

    cout<<"max:"<<total(arr,arr.length);
}