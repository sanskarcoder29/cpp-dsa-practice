#include <iostream>
using namespace std;

// Function with 2 integers
int add(int a, int b)
{
    return a + b;
}

// Function with 3 integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function with double values
double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << "Sum of 2 integers: " << add(5, 3) << endl;
    cout << "Sum of 3 integers: " << add(5, 3, 2) << endl;
    cout << "Sum of double values: " << add(5.5, 3.2) << endl;

    return 0;
}