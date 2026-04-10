<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Addition = " << a + b;
            break;

        case '-':
            cout << "Subtraction = " << a - b;
            break;

        case '*':
            cout << "Multiplication = " << a * b;
            break;

        case '/':
            cout << "Division = " << a / b;
            break;

        default:
            cout << "Invalid Operator!";
    }

    return 0;
=======
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Addition = " << a + b;
            break;

        case '-':
            cout << "Subtraction = " << a - b;
            break;

        case '*':
            cout << "Multiplication = " << a * b;
            break;

        case '/':
            cout << "Division = " << a / b;
            break;

        default:
            cout << "Invalid Operator!";
    }

    return 0;
>>>>>>> 253970dae92f9329549e71a3575b737f5567beaa
}