#include<iostream>
#include<stdlib.h>
using namespace std;

struct arr
{
    int *A;
    int size;
    int length;
};
//display function
void display(struct arr arr1)
{
    int i;
    cout<<"elements are :"<<endl;
    for(i=0;i<arr1.length;i++){
        cout<<arr1.A[i]<<endl;
    }
    
}
//append or add at end of array
void append(arr &arr1,int n){
    arr1.A[arr1.length]=n;
    arr1.length++;
    
}


//insert at any index 

int insert(arr &arr1,int idx,int n){
    int i;
    for(i=arr1.length;i>idx;i--){
        arr1.A[i]=arr1.A[i-1];
        
    }
    if(idx==i){
        arr1.A[i]=n;
        arr1.length++;
    }
    return 0;

}

//delete

int Delete(struct arr &arr1,int idx){
    int x=0,i;
    if(idx>=0&&idx<arr1.length){
        x=arr1.A[idx];
        for(i=idx;i<arr1.length;i++){
            arr1.A[i]=arr1.A[i+1];
        }
        arr1.length--;
    }
    return x;
}

int main(){
    struct arr arr1;
    int n,i;
    cout<<"enter size of array:";
    cin>>arr1.size;
    arr1.A=new int[arr1.size];
    arr1.length=0;
    cout<<"enter lenght of array:";
    cin>>arr1.length;

    
    cout<<"enter all element"<<endl;
    for(i=0;i<arr1.length;i++){
        cin>>arr1.A[i];
    }

    //insert(arr1,1,10);
    //append(arr1,4);
    display(arr1);
    cout<<"deleted element "<<Delete(arr1,0);
    display(arr1);
    
}