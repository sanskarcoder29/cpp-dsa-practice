#include <iostream>
using namespace std;

class Student {
private:
    int id;
    static int count;   // static data member

public:
    Student() {
        count++;        // increases whenever object is created
        id = count;
    }

    void display() {
        cout << "Student ID: " << id << endl;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();   // called using class name

    return 0;
}