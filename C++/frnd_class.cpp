#include<iostream>
using namespace std;

// Forward Decelaration
// class complex;
// class calculator;

class complex{
    int a, b;
    friend class simpleCalculator;
    // friend int calculator::complexRelSum(complex, complex);     //true for individual functions
    // friend int calculator::complexImgSum(complex, complex);
    public:
        void setNumber(int n, int m){
            a = n;
            b = m;
        }
        void getNumber(){
            cout<<"The complex number is "<< a <<" + "<< b <<"i."<<endl;
        }
};

class simpleCalculator{
    // int sum;
    public:
        int complexRelSum(complex o1, complex o2){
            return (o1.a + o2.a);
        }
        int complexImgSum(complex o1, complex o2){
            return (o1.b + o2.b);
        }
};

// int calculator::complexRelSum(complex o1, complex o2){
//             return (o1.a + o2.a);
//         }

// int calculator::complexImgSum(complex o1, complex o2){
//             return (o1.b + o2.b);
//         }

int main(){
    complex c1, c2;
    simpleCalculator cal;
    int sum;

    c1.setNumber(1, 2);
    c2.setNumber(3, 4);
    
    sum = cal.complexRelSum(c1, c2);
    cout<<"SUM of real part is "<<sum<<endl;
    sum = cal.complexImgSum(c1, c2);
    cout<<"SUM of imaginary part is "<<sum<<endl;

    return 0;
}