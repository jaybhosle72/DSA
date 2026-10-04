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
//this union1 is for unsorted arrays:
void union1(struct Array *a1,struct Array *a2,struct Array *a3){

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
                break;
            }
        }
        if(istrue==false){
            a3->A[k]=a2->A[i];
            k++;
            a3->length+=1;
        }
    }

}

// union of sorted arrays 
void union2(struct Array *a1,struct Array *a2,struct Array *a3){
    int i,j,k;
    i=j=k=0;
    while(i<a1->length && j<a2->length){
        if(a1->A[i]<a2->A[j]){
            a3->A[k]=a1->A[i];
            k++;
            i++;
        }
        else if(a2->A[j]<a1->A[i]){
            a3->A[k]=a2->A[j];
            k++;
            j++;
        }
        else if(a2->A[j]==a1->A[i]){
            a3->A[k]=a2->A[j];
            k++;
            j++;
            i++;
        }
    }
    //remaining elements of a1
    while(i < a1->length){
        a3->A[k++] = a1->A[i++];
    }

    // Remaining elements of a2
    while(j < a2->length){
        a3->A[k++] = a2->A[j++];
    }

    a3->length=k;

}


int main(){
    int ar[]={3,5,7,9,11};
    struct Array a1={ar,5,5};
    int ar1[]={2,5,6,8,11};
    struct Array a2={ar1,5,5};
    int ar2[10]={};
    struct Array a3={ar2,10,0};

    // cout<<"before union arr 1: :"<<endl;
    // dis(&a1); 
    // cout<<endl;
    // cout<<"before union arr 1: :"<<endl;
    // dis(&a2); 
    // cout<<endl;
    // union1(&a1,&a2,&a3);
    // cout<<"after union :"<<endl;
    // dis(&a3);
    
    cout<<"before union2 arr 1: :"<<endl;
    dis(&a1); 
    cout<<endl;
    cout<<"before union2 arr 2: :"<<endl;
    dis(&a2); 
    cout<<endl;
    union2(&a1,&a2,&a3);
    cout<<"after union2 :"<<endl;
    dis(&a3);


}