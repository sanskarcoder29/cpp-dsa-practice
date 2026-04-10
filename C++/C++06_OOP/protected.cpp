#include <iostream>
using namespace std;

class Base
{
protected:
    int num = 50;
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Number = " << num << endl;
    }
};

int main()
{
    Derived obj;
    obj.show();

    return 0;
}