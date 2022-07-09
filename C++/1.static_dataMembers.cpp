#include<iostream>
using namespace std;

class emp{
    int id;
    static int count;
public:
    void setData(void);
    void getData(void);
};

int emp :: count;

void emp :: setData(void){
    cout<<"Enter the id of emp_number " << count + 1 <<" : "<<endl;
    cin>>id;
    count++;
}

void emp :: getData(void){
    cout<<"The emp_id of "<< count + 1 <<" is "<<id<<endl;
}

int main(){
    emp e1, e2, e3;
    e1.setData();
    e2.setData();
    e3.setData();
    e1.getData();
    e2.getData();
    e3.getData();

    return 0;
}