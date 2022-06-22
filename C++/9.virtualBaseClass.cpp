#include<iostream>
using namespace std;

// To resolve the ambiguos nature when ingeriting from multi to Hierarchical inheritance
//      Student
//      /    \
// Subject  Practical
//      \    /
//      Result          this class will now contain 2 copies of Student class variables


class Student{
protected:
    int UID;
public:
    void setUID(int);
};

void Student::setUID(int ID){
    UID = ID;
}

class Subject: virtual public Student{
protected:
    float maths, physics;
public:
    void setMarks(float, float);
};

void Subject::setMarks(float m, float p){
    maths = m;
    physics = p;
}

class Practical: virtual public Student{
protected:
    float pMarks;
public:
    void setpMarks(float);
};

void Practical::setpMarks(float pracM){
    pMarks = pracM;
}

class Result: public Subject, public Practical{
    int result;
public:
    void getResult();
};

void Result::getResult(){
    result = maths + physics + pMarks;
    cout<<"UID: "<<UID<<" Total Marks: "<<result<<endl;
}

int main(){
    Result r;
    r.setUID(999);
    r.setMarks(70, 80);
    r.setpMarks(80);
    r.getResult();

    return 0;
}