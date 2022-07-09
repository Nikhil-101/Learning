#include<iostream>
using namespace std;

// Polymorphism
// Example of Run Time Binding(Compilation)
// As when the program is run & only until then compiler will get to know which display() func will be going to run

class Base{
public:
    int base_var;
    void display(){
        cout<<"Value of base_var: "<<base_var<<endl;
    }
};

class Derived: public Base{
public:
    int derived_var;
    void display(){
        cout<<"Value of base_var: "<<base_var<<endl;
        cout<<"Value of derived_var: "<<derived_var<<endl;
    }
};

int main(){
    Base b;
    Derived d;
    Derived* derived_ptr = &d;
// This is called Late Binding
// As the pointer is of base class so even if the object is given of derived class the pointer cannot access the derived class members
    Base* base_ptr = &d;

    base_ptr->base_var = 10;
    base_ptr->display();
// --------------------------------------------------
// As here the pointer os of derived class and object is also of derived class so the pointer of derived class can now access all the members of derived class and the inherited members of base class
    derived_ptr->base_var = 20;
    derived_ptr->derived_var = 50; 
    derived_ptr->display();

    return 0;
}