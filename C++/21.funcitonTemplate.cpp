#include<iostream>
using namespace std;

// here we not need to pass the type of variable to template as they will automatically pic using the passed arguments

template<class T1>
void swapp(T1 &n1, T1 &n2){
    T1 tmp = n1;
    n1 = n2;
    n2 = tmp;
}

template<class T1, class T2>
T1 sum(T1 a, T2 b){
    return a + b;
}

int main(){
    float a = 10, b = 20;
    cout<<sum(a, b)<<endl;
    cout<<sum(11.5, 15.3)<<endl;
    swap(a, b);
    cout<<a<<" "<<b<<endl;
    a = 12.4;
    b = 16.5;
    swap(a, b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}