#include <iostream>
using namespace std;

class Base
{
public:
    int x = 10;

protected:
    int y = 20;
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    Derived obj;
    obj.show();

    return 0;
}