#include<iostream>
using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return fact(n-1)*n;
// }

// int ncr(int n,int r){
//     int num,den;
//     num=fact(n);
//     den=fact(r)*fact(n-r);

//     return num/den;
// }

// recursive func for ncr

// int NCR(int n,int r){
//     if(r==0||n==r){
//         return 1;
//     }
//     return NCR(n-1,r-1)+NCR(n-1,r);
// }

// int main(){
//     cout<<NCR(5,3);
//     return 0;
// }

// iterative way

int fact(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto=i*facto;
    }
    return facto;
}

int nCR(int n,int r){
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}

int main(){
    cout<<nCR(5,3);
    return 0;
}