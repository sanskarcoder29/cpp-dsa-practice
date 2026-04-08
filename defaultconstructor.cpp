#include <iostream>
using namespace std;

class Demo
{
public:
    int x;

    Demo()     // Default constructor
    {
        x = 10;
    }

    void show()
    {
        cout << "Value of x = " << x << endl;
    }
};

int main()
{
    Demo obj;   // constructor automatically called

    obj.show();

    return 0;
}