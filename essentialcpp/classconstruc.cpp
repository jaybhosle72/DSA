#include<iostream>
using namespace std;

class rectangle{
    private:
        int lenght;
        int breadth;

    public:

        rectangle(int l,int b){
            lenght=l;
            breadth=b;
        }

        int area(){
            return lenght*breadth;
        }

        int perimeter(){
            return 2*(lenght+breadth);
        }
        int changelenght(int n){
            lenght=n;
            return lenght;
        }


};

int main(){
    rectangle r(10,5);

    cout<<r.area();
    cout<<r.perimeter();
    cout<<r.changelenght(20);
};