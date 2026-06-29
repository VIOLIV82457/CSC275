#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

//This class is used to demonstrate creating objects on the heap using the new keyword.

class Student
{
private:
    string name;
    int age;

public:
    // Constructor
    Student(string studentName, int studentAge);

    // Displays the student's information
    void display();

    // Destructor
    ~Student();
};

#endif