#include<iostream>
using namespace std;

// template<class T1, class T2,..........>

template<class T1, class T2>
class display{
    T1 num;
    T2 ch;
public:
    display(T1 a, T2 b){
        num = a;
        ch = b;
    }
    void get(){
        cout<<num<<endl<<ch<<endl;
    }
};

int main(){
    display <int, char>obj(10, 'N');
    obj.get();

    return 0;
}