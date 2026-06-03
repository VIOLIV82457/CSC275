#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
using namespace std;

//Data members are hidden using private access.
//Objects are accessed through public methods.
//This prevents accidental modification of object data.

class Book
{
private:
    string title;
    string author;
    string isbn;
    bool available;

public:
    Book();
    Book(string title,
         string author,
         string isbn);

    string getTitle() const;
    string getAuthor() const;
    string getISBN() const;
    bool isAvailable() const;

    void checkOut();
    void checkIn();

    bool operator==(const Book& other);

    friend ostream& operator<<(
        ostream& out,
        const Book& book);
};

#endif