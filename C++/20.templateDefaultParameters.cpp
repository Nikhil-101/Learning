#include<iostream>
using namespace std;

// This is enough self explanatory enough

template<class T1 = int, class T2 = string>
class myself{
    T1 num;
    T2 name;
public:
    myself(T1 m, T2 n){
        num = m;
        name = n;
    }
    void display(){
        cout<<num<<"."<<" "<<name<<endl;
    }
};

int main(){
    myself<> obj(1, "Nikhil Dhiman");
    myself<float> obj1(0.01, "Nikhil");
    obj.display();
    obj1.display();

    return 0;
}