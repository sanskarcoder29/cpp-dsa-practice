#include <iostream>
using namespace std;

class Test
{
public:
    int x;

    void setValue(int x)
    {
        this->x = x;
    }

    void display()
    {
        cout << "Value: " << x;
    }
};

int main()
{
    Test t1;

    t1.setValue(10);
    t1.display();

    return 0;
}