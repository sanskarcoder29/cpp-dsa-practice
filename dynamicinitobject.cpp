#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;

public:
    // Constructor
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        cout << "Area = " << length * width << endl;
    }
};

int main()
{
    int l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    // Dynamic initialization of object
    Rectangle r(l, w);

    r.area();

    return 0;
}