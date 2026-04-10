#include <iostream>
using namespace std;

class Number
{
private:
    int n;

    void square()
    {
        cout << "Square of number: " << n * n << endl;
    }

public:
    void getNumber()
    {
        cout << "Enter a number: ";
        cin >> n;

        square();   // calling another member function
    }
};

int main()
{
    Number obj;
    obj.getNumber();

    return 0;
}