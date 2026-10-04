#include<iostream>
using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;

    public:
        Array(){
            size=10;
            A=new int[size];
            length=0;
        }
        Array(int sz){
            size=sz;
            length=0;
            A=new int[size];
        }
        ~Array(){
            delete []A;
        }

        void Display();
        void Insert(int index,int x);
        int Delete(int index);
};

void Array::Display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}

void Array::Insert(int index,int x){
    if(length==size){
        return;
    }
    if(index>=0 && index<=length){
        int j=length;
        while(index<j){
            A[j]=A[j-1];
            j--;
        }
        A[index]=x;
        length+=1;
    }
}

int Array::Delete(int index){
    int n;
    if(index>=0 && index<length){
        n=A[index];
        int i=index;
        while(i<length-1){
            A[i]=A[i+1];
            i++;
        }
        length-=1;
    
    }
    return n;
}

int main(){
    Array arr(10);
    arr.Insert(0,1);
    arr.Insert(1,2);
    arr.Insert(2,3);
    arr.Insert(3,4);
    arr.Display();
    arr.Delete(3);
    arr.Display();
}