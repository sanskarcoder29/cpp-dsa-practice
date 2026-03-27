#include <iostream>
using namespace std;

// Function prototype
int add(int, int);

int main() {
    int a = 5, b = 3;

    int result = add(a, b);  // function call

    cout << "Sum = " << result << endl;

    return 0;
}

int add(int x, int y) {
    return x + y;
}