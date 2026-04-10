#include <iostream>
using namespace std;

template <class T>
class Test
{
public:
    T num;

    void show()
    {
        cout << "Value: " << num << endl;
    }
};

int main()
{
    Test<int> t1;
    t1.num = 10;
    t1.show();

    Test<float> t2;
    t2.num = 5.5;
    t2.show();

    return 0;
}