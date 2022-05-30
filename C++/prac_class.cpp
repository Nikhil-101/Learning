#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
public:
    void setName();
    void setAge();
    void getData();
};

void Student::setName()
{
    cout<<"Enter name: ";
    cin>>name;
}

void Student::setAge()
{
    cout<<"Enter age: ";
    cin>>age;
}

void Student::getData()
{
    cout<<"Name is: "<<name<<endl;
    cout<<"Age is: "<<age<<endl;
}

int main()
{
    Student s[4];

    for (int i = 0; i < 4; i++)
    {
        s[i].setName();
        s[i].setAge();
    }

    for (int i = 0; i < 4; i++)
    {
        s[i].getData();
    }

    return 0;
}