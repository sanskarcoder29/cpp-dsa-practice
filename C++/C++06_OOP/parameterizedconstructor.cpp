#include <iostream>
using namespace std;

class Demo
{
public:
    int x;

    Demo(int a)     // Parameterized constructor
    {
        x = a;
    }

    void show()
    {
        cout << "Value of x = " << x << endl;
    }
};

int main()
{
    Demo obj(50);   // passing value

    obj.show();

    return 0;
}