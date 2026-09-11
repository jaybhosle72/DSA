#include<iostream>
using namespace std;
// classic solution:
// int power(int m,int n){
//     if(n==0){
//         return 1;
//     }
//     return power(m,n-1)*m;
// }

// int main(){
//     cout<<power(5,2);
//     return 0;
// }

// better solution:
int power(int m,int n){
    if(n%2==0){
        if(n==0){
            return 1;
        }
        else{
            return power(m*m,n/2);
        }
    }
    else{
        return m*power(m*m,(n-1)/2);
    }
}    


int main(){
    cout<<power(2,8);
    return 0;
}