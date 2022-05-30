#include<iostream>
using namespace std;

class tmp{
    int a, b, c;
    public:
        tmp();
        tmp(int, int);
        tmp(int, int, int);
};

tmp::tmp(){
    cout<<"Default Constructor"<<endl;
}

tmp::tmp(int x, int y){
    a = x;
    b = y;
    cout<<"Double Parameterised Constructor"<<endl;
}

tmp::tmp(int x, int y, int z){
    a = x;
    b = y;
    c = z;
    cout<<"Triple Parameterised Constructor"<<endl;
}

int main(){
    tmp t1(1, 2, 3);    

    return 0;
}
