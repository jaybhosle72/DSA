#include<iostream>
using namespace std;

class Array{
    //private:
        int *A;
        int size;
        int length;

    public:
        Array(int sz){
            size=sz;
            length=0;
            A=new int[size];
        }

        void input(int len){
            length=len;
            cout<<"enter elements :"<<endl;
            for(int i=0;i<len;i++){
                cin>>A[i];
            }
        }
        Array missing1();
        int missing();

};

Array Array::missing1(){
    Array result(length);
    int l=A[0];
    int i=0;
    int n=0;
    while(i<length){
        if(A[i]-i != l){
            result.A[n]=i+l;
            n++;
            l+=1;
        }
        i++;
    }
    result.length=n;
    cout<<"missing elements : "<<endl;
    for(int i=0;i<result.length;i++){
        cout<<result.A[i]<< " ";
    }
    return result;

}

int Array::missing(){
    int sum=0;
    for(int i=0;i<length;i++){
        sum=sum+A[i];
    }
    int n=A[length-1];
    int s=(n*(n+1))/2;
    cout<<"missing element :";
    return s-sum;
}



int main(){
    int sz,len;
    cout<<"enter size of array :"<<endl;
    cin>>sz;
    Array arr(sz);
    cout<<"enter length of array :"<<endl;
    cin>>len;
    arr.input(len);
    arr.missing1();
    
    
}