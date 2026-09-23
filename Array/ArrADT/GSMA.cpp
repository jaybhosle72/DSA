#include<iostream>
using namespace std;

struct Array{
   int A[10]={8,3,9,15,6,10,7,2,12,4};
   int size=10;
   int length=10;
};

int get1(struct Array &arr,int index){
    if(index>=0&&index<arr.length){
        return arr.A[index];
    }
    return -1;
}

int set(struct Array &arr,int idx ,int n){
    if(idx>=0&&idx<arr.length){
        return arr.A[idx]=n;
    }
    return -1;
}

void display(struct Array &arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

int max(struct Array &arr){
    int m=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>m){
            m=arr.A[i];
        }
    }
    return m;
}

int min(struct Array &arr){
    int m=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<m){
            m=arr.A[i];
        }
    }
    return m;
}

float avg(struct Array &arr){
    float sum=0;
    for(int i=0;i<arr.length;i++){
        sum=sum+arr.A[i];
    }
    return sum/arr.length;
}
int main(){
    struct Array arr;
    // cout<<get1(arr,1)<<endl;
    // set(arr,1,100);

    display(arr);
    cout<<"SMALLEST element : "<<min(arr)<<endl;
    cout<<"avg :"<<avg(arr);
    return 0;
}