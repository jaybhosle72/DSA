#include<iostream>
using namespace std;

// class solution {
// public:
//     int e(int x,int n){
//         static int p=1,f=1;
//         int r=0;
//         if(n==0){
//             return 1;
//         }

//         r=e(x,n-1);
//         p=p*x;
//         f=f*n;
//         return r+(p/f);
//     }
// };

// int main(){
//     solution s;
//     cout<<s.e(5,5);
//     return 0;
// }

// using homer's rule

int e(int x,int n){
    static int s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+(x/n)*s;
        return e(x,n-1);

    }
}

int main(){
    cout<<e(10000,17);
    return 0;
}