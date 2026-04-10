#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    // Normal constructor
    Student(int m)
    {
        marks = m;
    }

    // Copy constructor
    Student(const Student &s)
    {
        marks = s.marks;
    }

    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(90);   // Normal constructor
    Student s2 = s1;  // Copy constructor called

    s1.display();
    s2.display();

    return 0;
}