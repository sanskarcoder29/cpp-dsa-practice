<<<<<<< HEAD
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
=======
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
>>>>>>> 253970dae92f9329549e71a3575b737f5567beaa
}