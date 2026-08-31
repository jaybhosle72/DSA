#include<iostream>
using namespace std;
int main(){
    struct cards
    {
        int face;
        int shape;
        int color;
    };

    struct rectangle
    {
        int lenght;
        int breadth;
        char x;
    };

    struct rectangle r1={10,5};

    cout<<"square of rectangle:"<<r1.lenght*r1.breadth;
    

    // struct cards c={1,0,0};
    // cout<<c.face<<endl;
    // cout<<c.color<<endl;

    struct cards deck[52]={{1,2,4},{2,5,2}};
    cout<<deck[0].face<<endl;
    cout<<deck[1].face<<endl;
    cout<<sizeof(deck)<<endl;
    cout<<sizeof(rectangle)<<endl;
    cout<<r1.lenght<<endl<<r1.breadth;
    return 0; 
}