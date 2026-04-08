#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A function" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "Class B function" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;

    obj.A::show();   // calling A class function
    obj.B::show();   // calling B class function
}