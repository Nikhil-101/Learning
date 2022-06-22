#include <iostream>
using namespace std;

class A
{
    int a = 10;

public:
    int b = 20;
    void printB()
    {
        cout << "Value of B: " << b << endl;
    }
};

class B : public A
{
    int c = 50;

public:
    int d = 100;
    void fun1()
    {
        cout << "Value of C: " << c << endl;
    }
    void fun2()
    {
        cout << "Value of B: " << b << endl;
    }
    // void fun3(){
    //     cout<<"Value of A: "<<a<<endl;
    // }
    void fun4()
    {
        cout << "Calling Class A function " << endl;
        printB();
    }
};

int main()
{
    B o;
    // cout<<"Value of Class A variable a: "<<o.a<<endl;       //no
    cout << "Value of Class A variable b: " << o.b << endl; // no
    // cout<<"Value of Class B variable c: "<<o.c<<endl;       //no
    cout << "Value of Class B variable d: " << o.d << endl; // yes

    cout << "Calling funcitons(printB): " << endl; // no
    o.printB();
    cout << "Calling funcitons(fun1): " << endl; // yes
    o.fun1();
    cout << "Calling funcitons(fun2): " << endl; // yes
    o.fun2();
    // cout<<"Calling funcitons(fun3): "<<endl;                //yes execution but no access
    // o.fun3();
    cout << "Calling funcitons(fun4): " << endl; // yes
    o.fun4();

    cout << "PROGRAM ENDED!!!" << endl;
    return 0;
}