#include "Student.h"

// Constructor:
// Initializes the student's name and age. Displays a message showing that the object has been created on the heap.

Student::Student(string studentName, int studentAge)
{
    name = studentName;
    age = studentAge;

    cout << "\nStudent object created successfully!" << endl;
}

// Displays the student's information.

void Student::display()
{
    cout << "-----------------------------------" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Student Age : " << age << endl;
    cout << "-----------------------------------" << endl;
}

// Destructor:
// Called automatically when delete is used.

Student::~Student()
{
    cout << "Deleting Student object for "
         << name << "." << endl;
}