#include "Book.h"
#include <iostream>

using namespace std;
//Book class allows for overflow, the equality operator, and the stream insertion operator

Book::Book()
{
    title = "";
    author = "";
    isbn = "";
    available = true;
}

Book::Book(
    string title,
    string author,
    string isbn)
{
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    available = true;
}

string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

string Book::getISBN() const
{
    return isbn;
}

bool Book::isAvailable() const
{
    return available;
}

void Book::checkOut()
{
    available = false;
}

void Book::checkIn()
{
    available = true;
}

bool Book::operator==(const Book& other)
{
    return isbn == other.isbn;
}

ostream& operator<<(
    ostream& out,
    const Book& book)
{
    out << "Title: "
        << book.title
        << "\nAuthor: "
        << book.author
        << "\nISBN: "
        << book.isbn
        << "\nAvailable: "
        << (book.available ? "Yes" : "No")
        << endl;

    return out;
}