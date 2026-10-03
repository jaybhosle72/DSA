#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void dis(struct Array *a){
    for(int i=0;i<a->length;i++){
        cout<<a->A[i]<<" ";
    }
    
}

void uni(struct Array *a1,struct Array *a2,struct Array *a3){
    for(int i=0;i<a1->length;i++){
        a3->A[i]=a1->A[i];
    }
    a3->length=a1->length;
    int k=a3->length;
    for(int i=0;i<a2->length;i++){
        bool istrue=false;

        for(int j=0;j<a3->length;j++){
            if(a2->A[i]==a3->A[j]){
                istrue=true;
            }
        }
        if(istrue==false){
            a3->A[k]=a2->A[i];
            k++;
            a3->length+=1;
        }
    }

}

int main(){
    int ar[]={3,5,10,4,6};
    struct Array a1={ar,5,5};
    int ar1[]={12,4,7,2,5};
    struct Array a2={ar1,5,5};
    int ar2[10]={};
    struct Array a3={ar2,10,0};

    cout<<"before union arr 1: :"<<endl;
    dis(&a1); 
    cout<<endl;
    cout<<"before union arr 1: :"<<endl;
    dis(&a2); 
    cout<<endl;
    uni(&a1,&a2,&a3);
    cout<<"after union :"<<endl;
    dis(&a3);
    



}