#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book
{
public:

    // Stores the title of the book
    string title;

    // True = checked out
    // False = available
    bool checkedOut;

    // Constructor
    Book(string t);

    // Displays the book
    void DisplayBook(int index);
};

#endif