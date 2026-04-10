<<<<<<< HEAD
#include <iostream>
using namespace std;

// Define union
union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    Data d;

    d.i = 10;
    cout << "Integer value: " << d.i << endl;

    d.f = 5.5;
    cout << "Float value: " << d.f << endl;

    d.c = 'A';
    cout << "Character value: " << d.c << endl;

    return 0;
=======
#include <iostream>
using namespace std;

// Define union
union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    Data d;

    d.i = 10;
    cout << "Integer value: " << d.i << endl;

    d.f = 5.5;
    cout << "Float value: " << d.f << endl;

    d.c = 'A';
    cout << "Character value: " << d.c << endl;

    return 0;
>>>>>>> 253970dae92f9329549e71a3575b737f5567beaa
}