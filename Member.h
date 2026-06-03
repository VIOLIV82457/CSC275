#ifndef MEMBER_H
#define MEMBER_H

#include "Person.h"

class Member : public Person
{
private:
    int booksBorrowed;

public:
    Member();
    Member(string name, int id);

    void borrowBook();
    void returnBook();

    void displayInfo() const override;
};

#endif