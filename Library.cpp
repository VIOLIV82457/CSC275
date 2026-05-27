#include "Library.h"

Library::Library()
{
    books.push_back(Book("Farenheit 451"));
    books.push_back(Book("The Hobbit"));
    books.push_back(Book("The Oddyssey"));
    books.push_back(Book("The Great Gatsby"));
    books.push_back(Book("To Kill a Mockingbird"));
}

void Library::DisplayBooks()
{
    cout << "\n========== LIBRARY BOOKS ==========\n";

    // Loop through all books
    for (int i = 0; i < books.size(); i++)
    {
        books[i].DisplayBook(i);
    }

    cout << endl;
}

void Library::CheckOutBook(int id)
{
    // One try block in this method
    try
    {
        // Check for negative ID
        if (id < 0)
        {
            throw invalid_argument("Book ID cannot be negative.");
        }

        // Check if ID exists
        if (id >= books.size())
        {
            throw out_of_range("Book ID does not exist.");
        }

        // Check if book already borrowed
        if (books[id].checkedOut == true)
        {
            throw runtime_error("Book is already checked out.");
        }

        // Check out book
        books[id].checkedOut = true;

        cout << "\nSUCCESS: Book checked out successfully!\n";
    }

    // Catch invalid_argument
    catch (invalid_argument& e)
    {
        cout << "\nERROR: " << e.what() << endl;
        cout << "Condition: Negative Book ID entered.\n";
    }

    // Catch out_of_range
    catch (out_of_range& e)
    {
        cout << "\nERROR: " << e.what() << endl;
        cout << "Condition: Book ID outside valid range.\n";
    }

    // Catch runtime_error
    catch (runtime_error& e)
    {
        cout << "\nERROR: " << e.what() << endl;
        cout << "Condition: Book already unavailable.\n";
    }
}


void Library::ReturnBook(int id)
{
    // One try block in this method
    try
    {
        // Check for negative ID
        if (id < 0)
        {
            throw invalid_argument("Book ID cannot be negative.");
        }

        // Check if ID exists
        if (id >= books.size())
        {
            throw out_of_range("Book ID does not exist.");
        }

        // Check if already available
        if (books[id].checkedOut == false)
        {
            throw logic_error("Book was not checked out.");
        }

        // Return the book
        books[id].checkedOut = false;

        cout << "\nSUCCESS: Book returned successfully!\n";
    }

    // Catch invalid_argument
    catch (invalid_argument& e)
    {
        cout << "\nERROR: " << e.what() << endl;
        cout << "Condition: Negative Book ID entered.\n";
    }

    // Catch out_of_range
    catch (out_of_range& e)
    {
        cout << "\nERROR: " << e.what() << endl;
        cout << "Condition: Book ID outside valid range.\n";
    }

    // Catch logic_error
    catch (logic_error& e)
    {
        cout << "\nERROR: " << e.what() << endl;
        cout << "Condition: User attempted to return available book.\n";
    }
}

void Library::SearchBook(string search)
{
    // Tracks if book was found
    bool found = false;

    // Loop through books
    for (int i = 0; i < books.size(); i++)
    {
        // Check if search matches title
        if (books[i].title.find(search) != string::npos)
        {
            books[i].DisplayBook(i);
            found = true;
        }
    }

    // No books found
    if (found == false)
    {
        cout << "No matching books found.\n";
    }
}