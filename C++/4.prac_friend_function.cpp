#include<iostream>
using namespace std;

class complex{
    int a, b;
public:
    void setData(int, int);
    void getData(void);
    friend void sumOfNumber(complex, complex);
};

void complex :: setData(int m, int n){
    a = m;
    b = n;
}

void complex :: getData(){
    cout<<"Number is "<<a<<" + "<<b<<"i"<<endl;
}

void sumOfNumber(complex o1, complex o2){
    cout<<"Number is "<<o1.a + o2.a<<" + "<<o1.b + o2.b<<"i"<<endl;
}

int main(){
    complex c1, c2;
    c1.setData(4, 5);
    c1.getData();
    c2.setData(6, 7);
    c2.getData();
    sumOfNumber(c1, c2);

    return 0;
}