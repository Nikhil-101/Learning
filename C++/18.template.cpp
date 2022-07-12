#include<iostream>
using namespace std;

// This help us create Generic Classes which can be used for wide range of datatypes
// Below the `T` will be replaced by the datatype provided with the object declaration
template <class T>
class vector{
public:
    T *arr;
    int size;

    vector(){
        cout<<"Object Initialized";
    }

    vector(int s){
        size = s;
        arr = new T[size];
    }

    T dotProduct(vector &obj){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * obj.arr[i];
        }
        return d;
    }
};

int main(){
    vector <float>v1(2);
    vector <float>v2(2);
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.8;
    v2.arr[0] = 3.1;
    v2.arr[1] = 4.6;

    float result = v1.dotProduct(v2);
    cout<<"Result: "<<result<<endl;
    result = v2.dotProduct(v1);
    cout<<"Result: "<<result<<endl;

    return 0;
}