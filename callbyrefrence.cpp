<<<<<<< HEAD
#include <iostream>
using namespace std;

void change(int *x) {
    *x = 100;
}

int main() {
    int num = 10;

    change(&num);

    cout << "Value = " << num;

    return 0;
=======
#include <iostream>
using namespace std;

void change(int *x) {
    *x = 100;
}

int main() {
    int num = 10;

    change(&num);

    cout << "Value = " << num;

    return 0;
>>>>>>> 253970dae92f9329549e71a3575b737f5567beaa
}