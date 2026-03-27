#include <iostream>
using namespace std;

// Define structure
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s1;   // structure variable

    cout << "Enter Roll Number: ";
    cin >> s1.roll;

    cout << "Enter Name: ";
    cin >> s1.name;

    cout << "Enter Marks: ";
    cin >> s1.marks;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s1.roll << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
        