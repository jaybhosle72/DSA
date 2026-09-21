#include<iostream>
using namespace std;

struct Array
{
    int A[6]={1,2,3,4,5,6};
    int lenght=6;
    int size=6;
};

void display(struct Array arr){
    for(int i=0;i<arr.lenght;i++){
        cout<<arr.A[i]<<endl;
    }
}
//normal linear search 
int linearS(struct Array &arr,int n){
    for(int i=0;i<arr.lenght;i++){
        if(arr.A[i]==n){
            cout<<"found:"<<n<<" "<<"at index:"<<i;
        }
    }
    return 0;

}

//improving linear search 
//transposition method : whenever a number searched it comes one index ahead 
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int transposition(struct Array *arr,int n){
    for(int i=0;i<arr->lenght;i++){
        if(arr->A[i]==n){
            swap(&arr->A[i],&arr->A[i-1]);
            cout<<"found:"<<n<<"at:"<<i<<endl;
        }
        
    }
    return 0;
}

// int movetohead(struct Array *arr,int n){
//     for(int i=0;i<arr->lenght;i++){
//         if(arr->A[i]==n){
//             swap(&arr->A[i],&arr->A[0]);
//             cout<<"found:"<<n<<"at:"<<i<<endl;
//         }
        
//     }
//     return 0;
    
// }




int main(){
    struct Array arr;
    //linearS(arr,1);
    display(arr);
    cout<<movetohead(&arr,5);
    display(arr);
    return 0;
}
    
