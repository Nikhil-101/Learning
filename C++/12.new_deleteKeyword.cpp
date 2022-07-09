#include<iostream>
using namespace std;

int main(){
    int a = 100;
    int *ptr = &a;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of ptr: "<<ptr<<endl;
    cout<<"Value of *ptr: "<<*ptr<<endl;

    // Dynamically Initialization
    int *n = new int(50);
    cout<<"Value of n: "<<n<<endl;
    cout<<"Value of *n: "<<*n<<endl;
    delete n;
    
    int *p = new int[4];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;

    cout<<"Value of *p[0]: "<<p[0]<<endl;
    cout<<"Value of *p[1]: "<<p[1]<<endl;
    cout<<"Value of *p[2]: "<<p[2]<<endl;
    cout<<"Value of *p[3]: "<<p[3]<<endl;
    delete[] p;

    return 0;
}