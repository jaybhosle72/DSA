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
            A=new int[sz];
            length=0;
        }
        void input(int len){
            for(int i=0;i<len;i++){
                cin>>A[i];
            }
        }


        void missingUnsort(){
            Array a1(6);
            int l=1;
            int h=8;
            cout<<"enter elements of array:"<<endl;
            a1.input(6);
            a1.length=6;
            Array a2(h+1);
            for(int i=0;i<a2.size;i++){
                a2.A[i]=0;
            }

            for(int i=0;i<a1.length;i++){
                a2.A[a1.A[i]]=1;
            }

            for(int i=1;i<a2.size;i++){
                if(a2.A[i]==0){
                    cout<<i<<" ";
                }
            }

        }
};