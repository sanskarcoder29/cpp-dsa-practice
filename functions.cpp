#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int square(int x) {
    return x * x;
}

void greet() {
    cout << "Welcome to function program! ";
}

int main() {
    int num1, num2;

    greet();

    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    int sum = add(num1, num2);
    cout << "sum = " << sum << endl;

    cout << "Square of first number = " << square(num1) << endl;

    return 0;
}
