#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "Person.h"

class Librarian : public Person
{
private:
    int employeeID;

public:
    Librarian();
    Librarian(string name,
              int id,
              int employeeID);

    void displayInfo() const override;
};

#endif