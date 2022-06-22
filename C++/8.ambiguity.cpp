#include <iostream>
using namespace std;

// Class 1
class B1
{
public:
    void greeting(void);
};

void B1::greeting()
{
    cout << "How are you???" << endl;
}

// Class 2
class B2
{
public:
    void greeting(void);
};

void B2::greeting()
{
    cout << "Kese hai app???" << endl;
}

// Derived Class
class C : public B1, public B2
{
public:
    int num = 10;
    void greeting();
};
// Resolving ambiguity
void C::greeting()
{
    B1::greeting();
    B2::greeting();
}

int main()
{
    C o;
    o.greeting();

    return 0;
}