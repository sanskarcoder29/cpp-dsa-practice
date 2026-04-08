#include <iostream>
using namespace std;

void showNumber(const int x)
{
    // x = x + 5;   // This would cause an error
    cout << "Value of x is: " << x << endl;
}

int main()
{
    int num = 10;
    
    showNumber(num);

    return 0;
}