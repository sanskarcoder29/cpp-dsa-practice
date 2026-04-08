#include <iostream>
using namespace std;

int add(int a, int b = 10)
{
    return a + b;
}

int main()
{
    cout << "Result 1: " << add(5, 3) << endl;
    cout << "Result 2: " << add(5) << endl;

    return 0;
}