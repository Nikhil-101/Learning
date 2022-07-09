#include<iostream>
using namespace std;

class Complex{
    int real, imag;
public:
    void setData(int, int);
    void getData(void);
};

void Complex ::setData(int a, int b){
    real = a;
    imag = b;
}

void Complex ::getData(void){
    cout<<"Real: "<<real<<endl;
    cout<<"Imaginary: "<<imag<<endl;
}

int main(){
    Complex c;
    c.setData(10, 20);
    c.getData();
// Pointer to a object
    Complex *ptr = &c;
    (*ptr).setData(50, 100);
// Arrow operator to access the object functions with less code
    ptr->getData();
// Dynamically allocation of object and array of object
    // Complex *p = new Complex;    // Dynamic Allocation of an object
    Complex *p = new Complex[4];    // Dynamic Allocation of array of object
    p[0].setData(101, 111);
    p[0].getData();
    p[1].setData(121, 141);
    p[1].getData();

    return 0;
}