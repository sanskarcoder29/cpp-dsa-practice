#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()    // constructor
    {
        cout << "Constructor is called" << endl;
    }
};

int main()
{
    Demo obj;   // constructor automatically runs

    return 0;
}