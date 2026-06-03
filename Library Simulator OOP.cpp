// Library Management System

// Description:This program allows a librarian to manage books in a library. Users can:

// Add books
// Display books
// Borrow books
// Return books
// View transactions
// Save books to a file
// Load books from a file

  
#include <iostream>

#include "Library.h"
#include "FileManager.h"
#include "Member.h"
#include "Librarian.h" 

using namespace std;
//Exceptions are used to prevent runtime failures. These would be Book not found, Already checked out, and file errors
void displayMenu()
{
    cout << "\n========== LIBRARY MANAGEMENT SYSTEM ==========\n";
    cout << "1. Add Book\n";
    cout << "2. Display Books\n";
    cout << "3. Borrow Book\n";
    cout << "4. Return Book\n";
    cout << "5. Display Transactions\n";
    cout << "6. Save Books\n";
    cout << "7. Load Books\n";
    cout << "8. Exit\n";
    cout << "Choice: ";
}

int main()
{
    Library library;

    cout << "=====================================\n";
    cout << "LIBRARY MANAGEMENT SYSTEM\n";
    cout << "=====================================\n";
    cout << "This program manages books in a library.\n";
    cout << "You can add, borrow, return, save,\n";
    cout << "and load books.\n\n";

    int choice;

    do
    {
        displayMenu();
        cin >> choice;

        try
        {
            switch (choice)
            {
            case 1:
            {
                string title;
                string author;
                string isbn;

                cin.ignore();

                cout << "Enter title: ";
                getline(cin, title);

                cout << "Enter author: ";
                getline(cin, author);

                cout << "Enter ISBN: ";
                getline(cin, isbn);

                library.addBook(
                    Book(title,
                         author,
                         isbn));

                cout << "Book added.\n";
                break;
            }

            case 2:
            {
                library.displayBooks();
                break;
            }

            case 3:
            {
                string isbn;
                string memberName;

                cin.ignore();

                cout << "Member Name: ";
                getline(cin, memberName);

                cout << "ISBN: ";
                getline(cin, isbn);

                library.borrowBook(
                    isbn,
                    memberName);

                break;
            }

            case 4:
            {
                string isbn;
                string memberName;

                cin.ignore();

                cout << "Member Name: ";
                getline(cin, memberName);

                cout << "ISBN: ";
                getline(cin, isbn);

                library.returnBook(
                    isbn,
                    memberName);

                break;
            }

            case 5:
            {
                library.displayTransactions();
                break;
            }

            case 6:
            {
                FileManager::saveBooks(
                    library.getBooks(),
                    "books.txt");

                cout << "Books saved.\n";
                break;
            }

            case 7:
            {
                FileManager::loadBooks(
                    library.getBooks(),
                    "books.txt");

                cout << "Books loaded.\n";
                break;
            }

            case 8:
            {
                cout << "Goodbye!\n";
                break;
            }

            default:
            {
                cout << "Invalid choice.\n";
            }
            }
        }
        catch (exception& e)
        {
            cout << "\nERROR: "
                 << e.what()
                 << endl;
        }

    } while (choice != 9);

    return 0;
}