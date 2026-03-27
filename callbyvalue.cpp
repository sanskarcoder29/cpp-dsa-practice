#include <iostream>
using namespace std;

// Function prototype
void change(int);

// Main function
int main() {
    int num = 10;

    cout << "Before function call: " << num << endl;

    change(num);  // Call by value

    cout << "After function call: " << num << endl;

    return 0;
}

// Function definition
void change(int x) {
    x = 100;
    cout << "Inside function: " << x << endl;
}