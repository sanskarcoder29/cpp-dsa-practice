#include <iostream>
using namespace std;

class Number
{
public:
    int x;

    void getNumber()
    {
        cout << "Enter number: ";
        cin >> x;
    }
};

void display(Number n)   // object passed to function
{
    cout << "Number is: " << n.x << endl;
}

int main()
{
    Number obj;

    obj.getNumber();

    display(obj);   // passing object

    return 0;
}