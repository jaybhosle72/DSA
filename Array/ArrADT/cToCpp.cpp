#include<iostream>
using namespace std;
template <class T>
class Array{
    private:
        T *A;
        int size;
        int length;

    public:
        Array(){
            size=10;
            A=new T[size];
            length=0;
        }
        Array(int sz){
            size=sz;
            length=0;
            A=new T[size];
        }
        ~Array(){
            delete []A;
        }

        void Display();
        void Insert(int index,T x);
        T Delete(int index);
};

template<class T>
void Array<T>::Display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}
template<class T>
void Array<T>::Insert(int index,T x){
    if(length==size){
        return;
    }
    if(index>=0 && index<=length){
        int j=length;
        while(index<j){
            A[j]=A[j-1];
            j--;
        }
        A[index]=x;
        length+=1;
    }
}
template<class T>
T Array<T>::Delete(int index){
    T n;
    if(index>=0 && index<length){
        n=A[index];
        int i=index;
        while(i<length-1){
            A[i]=A[i+1];
            i++;
        }
        length-=1;
    
    }
    return n;
}

int main(){
    Array<float> arr(10);
    arr.Insert(0,1);
    arr.Insert(1,2);
    arr.Insert(2,3);
    arr.Insert(3,4);
    arr.Display();
    cout<<"\n";
    
    cout<<"deleted: "<<arr.Delete(3);

    cout<<endl;
    arr.Display();
}