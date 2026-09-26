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



}