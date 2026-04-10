#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "This is Base class function" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "This is Derived class function" << endl;
    }
};

int main()
{
    Base *ptr;
    Derived d;

    ptr = &d;

    ptr->show();   // runtime decision

    return 0;
}