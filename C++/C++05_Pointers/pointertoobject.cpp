#include <iostream>
using namespace std;

class Student
{
public:
    int marks;

    void display()
    {
        cout << "Marks: " << marks;
    }
};

int main()
{
    Student s1;          // object
    Student *ptr;        // pointer to object

    ptr = &s1;           // pointer stores address of object

    ptr->marks = 90;     // accessing variable
    ptr->display();      // accessing function

    return 0;
}