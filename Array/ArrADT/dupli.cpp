#include<iostream>
using namespace std;

class Array{
  private:
    int *A;
    int size;
    int length;


    public:
        Array(int sz){
            size=sz;
            length=0;
            A=new int[size];
        }
        void dupli();
        void input(int len);
};
void Array::dupli(){
            int dup=0;
            
            for(int i=0;i<length;i++){
                if(A[i]==A[i+1]){
                    if(dup!=A[i]){
                        cout<<"duplicate : "<< A[i] <<endl;
                        dup=A[i];
                    }
                }
            }
}

void Array::input(int len){
    length=len;
    cout<<"enter elemets :"<<endl;
    for(int i=0;i<len;i++){
        cin>>A[i];
    }


}

int main(){
    int sz,len;
    cout<<"enter size and length of Array"<<endl;
    cin>>sz >> len;
    Array arr(sz);
    arr.input(len);
    
    arr.dupli();


    return 0;
}