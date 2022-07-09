#include<iostream>
using namespace std;

class A{
    int a;
public:
    void setData(int a){
        // here this keyword points to the object(a here) which has called the member function(setData() here)
        // so if we use (return *this) we will get the object(a)
        this->a = a;
    }
    void getData(){
        cout<<"Value of a: "<<a<<endl;
    }
};

int main(){
    A a;
    a.setData(11);
    a.getData();

    return 0;
}