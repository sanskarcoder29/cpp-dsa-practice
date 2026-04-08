#include <iostream>
using namespace std;

class B;   // forward declaration

class A
{
private:
    int x;

public:
    A()
    {
        x = 10;
    }

    friend void show(A, B);
};

class B
{
private:
    int y;

public:
    B()
    {
        y = 20;
    }

    friend void show(A, B);
};

void show(A a, B b)
{
    cout << "Sum = " << a.x + b.y << endl;
}

int main()
{
    A obj1;
    B obj2;

    show(obj1, obj2);

    return 0;
}