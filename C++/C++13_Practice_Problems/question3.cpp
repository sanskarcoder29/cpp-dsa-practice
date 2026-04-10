<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {

    int n, i = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(true) {
        
        if(i > n) {
            break;
        }

        if(i % 2 != 0) {
            sum = sum + i;
        }

        i++;
    }

    cout << "Sum of odd numbers = " << sum;

    return 0;
=======
#include <iostream>
using namespace std;

int main() {

    int n, i = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(true) {
        
        if(i > n) {
            break;
        }

        if(i % 2 != 0) {
            sum = sum + i;
        }

        i++;
    }

    cout << "Sum of odd numbers = " << sum;

    return 0;
>>>>>>> 253970dae92f9329549e71a3575b737f5567beaa
}