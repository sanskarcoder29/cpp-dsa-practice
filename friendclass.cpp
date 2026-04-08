#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A()
    {
        x = 50;
    }

    friend class B;   // B is friend class
};

class B
{
public:
    void show(A obj)
    {
        cout << "Value of x is: " << obj.x << endl;
    }
};

int main()
{
    A a1;
    B b1;

    b1.show(a1);

    return 0;
}