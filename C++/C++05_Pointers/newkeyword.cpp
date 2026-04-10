#include <iostream>
using namespace std;

int main()
{
    int *p;

    p = new int;   // dynamically allocate memory

    *p = 10;

    cout << *p;

    return 0;
}