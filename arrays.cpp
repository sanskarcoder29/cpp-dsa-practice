#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};   // array declaration and initialization

    cout << "Elements of the array are: " << endl;

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}