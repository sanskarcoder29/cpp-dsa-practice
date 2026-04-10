<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {

    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

for(int i = 1; i <= n; i++) {
            if(i % 2 == 0) {
            sum = sum + i;
        }
    }

    cout << "Sum of even numbers = " << sum;

    return 0;
=======
#include <iostream>
using namespace std;

int main() {

    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

for(int i = 1; i <= n; i++) {
            if(i % 2 == 0) {
            sum = sum + i;
        }
    }

    cout << "Sum of even numbers = " << sum;

    return 0;
>>>>>>> 253970dae92f9329549e71a3575b737f5567beaa
}