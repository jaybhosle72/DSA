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
// int power(int m,int n){
//     if(n%2==0){
//         if(n==0){
//             return 1;
//         }
//         else{
//             return power(m*m,n/2);
//         }
//     }
//     else{
//         return m*power(m*m,(n-1)/2);
//     }
// }    


// int main(){
//     cout<<power(2,8);
//     return 0;
// }

// leetcode solution :
class Solution{
public:
    double mypow(double x, int n){
        long long N=n;
        if(N<0){
            x = 1 / x;
            N = -N;
        }
        if(N%2==0){

            if(N==0){
                return 1;
            }
            else{
                return mypow(x*x,N/2);
            }
        }
        else{
            return x*mypow(x*x,(N-1)/2);
        }
    }
};
int main(){
    Solution s;
    cout<<s.mypow(2.00,-2);
    return 0;
}

// with iterative method

// class solution{
// public:
//     int power(int m, int n){
//         int ans=1;
//         if(n==0){
//             return 1;
//         }
//         for(int i=1;i<=n;i++){
//             ans=ans*m;
//         }
//         return ans;

//     }
// };
// int main(){
//     solution s;
//     cout<<s.power(2,2);
//     return 0;
// }





