#include <iostream>
using namespace std;

// Creating a class
class Car
{
public:
    string brand;
    int speed;

    void show()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main()
{
    // Creating object
    Car c1;

    c1.brand = "BMW";
    c1.speed = 200;

    // Calling function
    c1.show();

    return 0;
}