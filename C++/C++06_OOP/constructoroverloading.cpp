#include <iostream>
using namespace std;

class Demo
{
public:
    int a, b;

    Demo()    // default constructor
    {
        a = 0;
        b = 0;
    }

    Demo(int x)    // constructor with one parameter
    {
        a = x;
        b = 0;
    }

    Demo(int x, int y)   // constructor with two parameters
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main()
{
    Demo obj1;        // calls constructor 1
    Demo obj2(10);    // calls constructor 2
    Demo obj3(10,20); // calls constructor 3

    obj1.show();
    obj2.show();
    obj3.show();

    return 0;
}