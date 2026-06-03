#include "Member.h"
#include <iostream>

using namespace std;

//Member and Librarian inherit common attributes such as name and ID
//They also inherit the behavior of displayInfo()


Member::Member() : Person()
{
    booksBorrowed = 0;
}

Member::Member(string name, int id)
    : Person(name, id)
{
    booksBorrowed = 0;
}

void Member::borrowBook()
{
    booksBorrowed++;
}

void Member::returnBook()
{
    if (booksBorrowed > 0)
    {
        booksBorrowed--;
    }
}

void Member::displayInfo() const
{
    cout << "Member Information" << endl;
    Person::displayInfo();
    cout << "Books Borrowed: "
         << booksBorrowed << endl;
}