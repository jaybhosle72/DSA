#include<iostream>
using namespace std;

template<class t>
class arithmetic{
    private :
        t a;
        t b;

    public:

        arithmetic(t a ,t b){
            this->a=a;
            this->b=b;
        }

        t add(){
            return a+b;
        }

        t sub(){
            return 
            a -b;
        }    
};

int main(){
    arithmetic<float> ar(5.6,6.4);

    cout<<ar.add()<<endl;
    cout<<ar.sub();
}