#include<iostream>
using namespace std;

// Member function defination outside class

template<class T>
class getter{
    T a;
public:
    getter(T m){
        a = m;
    }
    void display(void);
};

template<class T>
void getter<T>::display(){
    cout<<"Print: "<<a<<endl;
}

// function overloading with template
// if we have to functions with one have exact match (display(int a)) & other one is template (display(T a)) match then
// the function with exact match will override the template function

void display(string a){
    cout<<"Pure Print: "<<a<<endl;
}

template<class T>
void display(T a){
    cout<<"Template Print: "<<a<<endl;
}

void display(int a){
    cout<<"Pure Print: "<<a<<endl;
}

int main(){
    getter<string> o("Nikhil");
    o.display();
    display(100);
    string s = "Nikhil Dhiman";
    display(s);
    display("Nikhil Dhiman");

    return 0;
}