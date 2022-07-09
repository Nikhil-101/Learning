#include<iostream>
using namespace std;

class Base{
    int a, b;
public:
// initializing list of variables in constructors
// they need to be assigned the values in the order of their declaration\
// they are used when statements in constructors body gets very complicated
    Base(int m, int n): a(m), b(n){
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }
};

int main(){
    Base(10, 20);

    return 0;
}