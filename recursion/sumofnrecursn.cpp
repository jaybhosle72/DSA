#include<iostream>
using namespace std;

// this is my solution: 
// int x=0,sum=0;
// int fun(int n){
//     if(n>0){
//         if(x<=n){
//             sum=sum+x;
//             x++;
//             fun(n);
//         }
    
//     }
//     return sum;
// }
// int main(){
//     cout<<fun(0);
//     return 0;
// }

// this is ideal solution:
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int main(){
    cout<<sum(5);
    return 0;
}