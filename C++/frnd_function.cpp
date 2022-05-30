#include<iostream>
using namespace std;

// Basically sum of complex number

class complex{
    int a, b;
    public:
        void setNumber(int n, int m){
            a = n;
            b = m;
        }
        void getNumber(){
            cout<<"The complex number is "<< a <<" + "<<b<<"i."<<endl;
        }
        friend complex complexSum(complex, complex);          // Friend Function
};

complex complexSum(complex o1, complex o2){
    complex x1;
    x1.setNumber(o1.a + o2.a, o1.b + o2.b);
    return x1;
}

int main(){
    complex c1, c2, c3;
    c1.setNumber(1, 2);
    c2.setNumber(3, 4);
    c1.getNumber();
    c2.getNumber();
    c3 = complexSum(c1, c2);
    c3.getNumber();
    return 0;
}