#include<iostream>
using namespace std;

int main(){
    /* first diclaration then initialisation
    int A[5];
    A[0]=1;
    A[1]=2;
    A[2]=3;
    A[3]=4;
    A[4]=5;
*/
    
/* diclaration and initialisation
    int B[5]={2,4,6,8,10};
    cout<<sizeof(B)<<endl;
    cout<<B[0]<<endl;
    printf("%d\n",B[1]);
}*/ 
    // int A[10]={2,3,4,5,6,7,8,8,9,0};
   /* for(int i=0;i<10;i++){
        cout<< A[i]<<endl;
    }
    return 0;
    */

        /* way of for loop
        for(int x:A){
            cout<<x<<endl;
        }
        */


        int n;
        cout<<"enter size :"<<endl;
        cin>>n;
        int A[n];
        for(int i=0; i<n;i++){
            cin>>A[i];
        }

        cout<<"values here : "<<endl;   
        for(int x:A){
             cout<<x<<endl;
        }
        return 0;
}