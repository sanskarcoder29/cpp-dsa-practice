#include <iostream>
using namespace std;

class Test
{
public:
    int x;

    void show()
    {
        cout << "Value: " << x;
    }
};

int main()
{
    Test *ptr = new Test;   // dynamic object

    ptr->x = 10;
    ptr->show();

    delete ptr;

    return 0;
}