<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    
    int a = 10;        // normal variable
    int *p;            // pointer variable (can store address of int)

    p = &a;            // pointer stores address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    cout << "Pointer p stores address: " << p << endl;
    cout << "Value at address stored in p: " << *p << endl;

    return 0;
=======
#include <iostream>
using namespace std;

int main() {
    
    int a = 10;        // normal variable
    int *p;            // pointer variable (can store address of int)

    p = &a;            // pointer stores address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    cout << "Pointer p stores address: " << p << endl;
    cout << "Value at address stored in p: " << *p << endl;

    return 0;
>>>>>>> 253970dae92f9329549e71a3575b737f5567beaa
}