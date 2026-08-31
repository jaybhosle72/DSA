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

        void changelenght(int n){
            lenght=n;
            cout<<lenght;
        }

};

int main(){
    rectangle r(10,5);
    
    r.area();
    r.changelenght(20);

    
}