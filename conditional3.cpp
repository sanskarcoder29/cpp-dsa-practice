#include <iostream>
using namespace std;

int main () {
    float percent;

    cout << "Enter your percentage: ";
    cin >> percent;

    if (percent >= 90) {
        cout << "Grade A";
    }

    else if (percent >= 80) {
        cout << "Grade B";
    }

    else if (percent >= 70) {
        cout << "Grade C";
    }
 
    else {
        cout << "Grade D";
    }

    return 0;
}
