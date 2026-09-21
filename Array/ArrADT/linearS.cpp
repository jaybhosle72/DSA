#include<iostream>
using namespace std;

struct Array
{
    int A[6]={1,2,3,4,5,6};
    int lenght=6;
    int size=6;
};
//normal linear search 
int linearS(struct Array &arr,int n){
    for(int i=0;i<arr.lenght;i++){
        if(arr.A[i]==n){
            cout<<"found:"<<n<<" "<<"at index:"<<i;
        }
    }
    return 0;

}


int main(){
    struct Array arr;
    linearS(arr,1);
    return 0;
}
    
