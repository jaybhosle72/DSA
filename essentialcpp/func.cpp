#include<iostream>
using namespace std;

int add(int x,int y){
    int s=x+y;
    return s;
}

int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    int z=add(a,b);
    cout<<"result is : "<<z;
}