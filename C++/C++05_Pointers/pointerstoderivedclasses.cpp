#include <iostream>
using namespace std;

class Base
{
public:
    int x;

    void show()
    {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base
{
public:
    int y;

    void display()
    {
        cout << "Derived class function" << endl;
    }
};

int main()
{
    Base *ptr;       // base class pointer
    Derived d1;      // derived class object

    ptr = &d1;       // pointer pointing to derived object

    ptr->show();     // base class function called

    return 0;
}