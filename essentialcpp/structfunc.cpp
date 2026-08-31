#include<iostream>
#include<stdio.h>
using namespace std;

// creating structure
struct rectangle{
    int lenght;
    int breadth;
};
// creating function to initialization
void initialize(struct rectangle *p,int l,int b){
    p->lenght=l;
    p->breadth=b;
};
// creating func for area
int area(struct rectangle r1){
    return r1.lenght*r1.breadth;
}
// creating func for change the actual lenght by call by reference
void changelenght(struct rectangle *r1,int n){
    r1->lenght=n;
    cout<<r1->lenght;
}

int main(){
    struct rectangle r;

    initialize(&r,10,5);
    cout<<r.lenght<<r.breadth<<endl;
    cout<<area(r)<<endl;
    changelenght(&r,20);
    cout<<r.lenght;

}