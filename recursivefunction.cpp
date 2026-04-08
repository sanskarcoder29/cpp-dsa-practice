#include <iostream>
using namespace std;

void printNumbers(int n)
{
    // Base condition
    if(n == 0)
        return;

    // Recursive call
    printNumbers(n - 1);

    cout << n << " ";
}

int main()
{
    int num = 5;
    printNumbers(num);
    return 0;
}