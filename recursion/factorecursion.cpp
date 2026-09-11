#include<iostream>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}


int main(){
    cout<<fact(0);
    
    return 0;
}

// iterative :
// int main(){
//     int n=3,fact=1;
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         for(int i =1;i<=n;i++){
//             fact=fact*i;
//         }
//     }
//     cout<<fact;
    
// }
