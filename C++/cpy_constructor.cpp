#include<iostream>
using namespace std;

class number{
    int num;
    public:
        number(){}
        number(int);
        number(number &);
        void showNum();
};

number::number(int n){
    num = n;
}

number::number(number &o){
    cout<<"Copy Constructor Called!!!"<<endl;
    num = o.num;
}

void number::showNum(){
    cout<<"NUM: "<<num<<endl;
}

int main(){
    number n1, n2;
    n1 = number(10);
    n1.showNum();
    n2 = number(n1);
    n2.showNum();
    n2.showNum();
    
    return 0;
}