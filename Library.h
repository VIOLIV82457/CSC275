#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

#include "Book.h"

using namespace std;

class Library
{
private:

    // Vector stores all books
    vector<Book> books;

public:

    // Constructor
    Library();

    // Displays all books
    void DisplayBooks();

    // Allows checkout
    void CheckOutBook(int id);

    // Allows return
    void ReturnBook(int id);

    // Search for books
    void SearchBook(string search);
};

#endif