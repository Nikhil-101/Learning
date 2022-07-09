#include<iostream>
using namespace std;

// Polymorphism

class Base{
public:
    int base_var = 1;
// this is 99% similar to the previous program
// making this member function virtual lets the base pointer pointing to the drived object access the funtion of derived class rather than the base class as it was inaccessible befor.
// basically tells that if the base class pointer points towards the derived class object then run the member function of the derived class rather than base class
// This also comes under Runtime Compilation
    virtual void display(){
        cout<<"Value of base_var: "<<base_var<<endl;
    }
};

class Derived: public Base{
public:
    int derived_var = 2;
    void display(){
        cout<<"Value of base_var: "<<base_var<<endl;
        cout<<"Value of derived_var: "<<derived_var<<endl;
    }
};

int main(){
    Base b;
    Derived d;
    Base *base_ptr = &d;
    base_ptr->display();

    return 0;
}