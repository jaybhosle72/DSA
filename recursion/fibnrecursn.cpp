#include<iostream>
using namespace std;

// int fibo(int n){
//     if(n<=1){
//         return n;
//     }
//     return fibo(n-2)+fibo(n-1);
// }

// int main(){
//     cout<<fibo(6);
//     return 0;
// }
// function using loop:

// int fib(int n){
//     int fi=1,fo=0;
//     if(n<=1){
//         return n;
//     }
//     int fibo;
//     for(int i=1;i<n;i++){
//         fibo=fi+fo;
//         fo=fi;
//         fi=fibo;
//     }
//     return fibo;
// }

// int main(){
//     cout<<fib(7);
//     return 0;
// }

// fibonacci using memoization:
int f [10];
int fib(int n){

    if(n<=1){
        f[n]=n;
        return n;
    }
    if(f[n-2]==-1){
        f[n-2]=fib(n-2);
    }
    if(f[n-1]==-1){
        f[n-1]=fib(n-1);
    }
    f[n]=f[n-2]+f[n-1];
    return f[n-2]+f[n-1];


}

int main(){
    int i;
    for(i=0;i<10;i++){
        f[i]=-1;
    }
    cout<<fib(6);
    return 0;


}
