#include<iostream>
using namespace std;

class base1{
    int data1;
public:
    base1(int a){
        data1 = a;
        cout<<"Base 1 Class constructor"<<endl;
        cout<<"Data1: "<<data1<<endl;
    }
};

class base2{
    int data2;
public:
    base2(int b){
        data2 = b;
        cout<<"Base 2 Class constructor"<<endl;
        cout<<"Data2: "<<data2<<endl;
    }
};

class derived : public base1, public base2{
    int dData1, dData2;
public:
// Syntax for passing arguments to all the constructors of derived classes
// Order of constructor execution: Virtual Classes >> 1st inherited class(base1) >> rest inherited classes(base2...) >> Derived class
    derived(int a, int b, int c, int d): base1(a), base2(b){
        dData1 = c;
        dData2 = d;
        cout<<"Derived Class constructor"<<endl;
        cout<<"dData1: "<<dData1<<endl;
        cout<<"dData2: "<<dData2<<endl;
    }
};

int main(){
    derived d(1, 2, 3, 4);

    return 0;
}