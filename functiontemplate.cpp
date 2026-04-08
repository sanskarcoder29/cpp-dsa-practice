#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add(5,3) << endl;
    cout << add(4.5,2.3) << endl;

    return 0;
}