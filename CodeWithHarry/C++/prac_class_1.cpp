#include<iostream>
using namespace std;

class testing{
    string name;
    int age;
public:
    void set_name();
    void set_age();
    void get_name();
    void get_age();
};

void testing::set_name(){
    cout<<"Enter name: ";
    cin>>name;
}

void testing::set_age(){
    cout<<"Enter age: ";
    cin>>age;
}

void testing::get_name(){
    cout<<"Name: "<<name<<endl;
}

void testing::get_age(){
    cout<<"Age: "<<age<<endl;
}

int main(){
    testing t;
    t.set_name();
    t.set_age();
    t.get_name();
    t.get_age();

    return 0;
}