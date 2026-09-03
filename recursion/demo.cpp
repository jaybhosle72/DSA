#include<iostream>
#include<stdio.h>
using namespace std;

void func(int n){
    if(n>0){
        cout<<n;
        func(n-1); // it will print then go to func , follows ascending phase and print 321
    }
}


void func1(int n){
    if(n>0){
        func1(n-1); //it follows descending phase , it go till func1(0) then while returning it print 123
        cout<<n;
    }
}
int main(){
    int x=3;
    func(x);
    func1(x);
    return 0;
}
