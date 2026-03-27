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
}