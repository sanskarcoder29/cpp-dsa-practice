#include <iostream>
using namespace std;

class Demo
{
private:
    int x;

public:
    void setData()
    {
        x = 10;
    }

    friend void show(Demo d);   // friend function declaration
};

void show(Demo d)   // friend function definition
{
    cout << "Value of x is: " << d.x << endl;
}

int main()
{
    Demo obj;

    obj.setData();

    show(obj);   // calling friend function

    return 0;
}