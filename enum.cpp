#include <iostream>
using namespace std;

// Define enum
enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
    Weekday day;

    day = Wednesday;

    cout << "Day number: " << day << endl;

    return 0;
}