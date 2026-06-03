#include "Librarian.h"
#include <iostream>

using namespace std;

//Member and Librarian inherit common attributes such as name and ID
//They also inherit the behavior of displayInfo()

Librarian::Librarian()
{
    employeeID = 0;
}

Librarian::Librarian(
    string name,
    int id,
    int employeeID)
    : Person(name, id)
{
    this->employeeID = employeeID;
}

void Librarian::displayInfo() const
{
    cout << "Librarian Information" << endl;
    Person::displayInfo();
    cout << "Employee ID: "
         << employeeID << endl;
}