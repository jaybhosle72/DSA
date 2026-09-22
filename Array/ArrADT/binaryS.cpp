#include<iostream>
using namespace std;

struct Array{
    int A[15]={4,8,10,15,18,21,24,27,29,33,34,37,39,41,43};
    int size=15;
    int length=15;
};

//iterative way :
int binary(struct Array *arr,int n){
    int l=0;
    int h=arr->length-1;
    int mid=0;
    for(int i=0;i<arr->length;i++){
        mid=(l+h)/2;
        if(arr->A[mid]==n){
            cout<<"mil gaya"<<endl;
            return n;
        }
        else if (arr->A[mid]<n)
        {
            l=mid+1;
        }
        else if (arr->A[mid]>n)
        {
            h=mid-1;
        }
    }
    cout<<"nahi mila";
    return -1;
}

//recursive way :

int recursbinary(struct Array *arr,int l,int h,int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(arr->A[mid]==key){
            return mid;
        }
        else if (arr->A[mid]<key)
        {
            return recursbinary(arr,mid+1,h,key);
        }
        else{
            return recursbinary(arr,l,mid-1,key);
        
        
        }
        
    }
    return -1;
}







int main(){
    struct Array arr;
    int l=0;
    int h=arr.length-1;
    cout<<recursbinary(&arr,l,h,8);
    return 0;


}