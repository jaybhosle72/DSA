#include<iostream>
using namespace std;
struct rectangle
{
    int lenght;
    int breadth;
};

struct jay{
    int a[5];
    int n;
};
// call by values
// int area(struct rectangle r1){
//     r1.lenght++       //it can not update the actual r.lenght
//     return (r1.lenght)* (r1.breadth);

// }

 //call by reference 
// int area(struct rectangle &r1){
//     r1.lenght++; // it will update the actual lenght of r 
//     return r1.lenght * r1.breadth;
// }

//  void changelen(struct rectangle *r,int l){
//     r->lenght=l;
// }

int fun(struct jay j1){
    j1.a[0]=8;
    return 0;
}

int main(){
    struct jay j={{9,2,3,4,5},20};

    fun(j);
    cout<<j.a[0];
    
    
    
}

// arr cant be send by call by value , 
// but if array is inside the structure then it can send by call by value

