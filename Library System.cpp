#include <iostream>
#include <stdexcept>

#include "Library.h"

using namespace std;
int main()
{
    // Create library object
    Library library;

    // Stores menu choice
    int choice;

    // Stores book ID
    int id;

    // Stores search text
    string search;

    do
    {
        // Display menu
        cout << "\n========== MAIN MENU ==========\n";
        cout << "1. View Books\n";
        cout << "2. Check Out Book\n";
        cout << "3. Return Book\n";
        cout << "4. Search Books\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";

        // One try block in main
        try
        {
            // Get menu input
            cin >> choice;

            // Detect invalid numeric input
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');

                throw invalid_argument("Menu input must be numeric.");
            }

            // View books
            if (choice == 1)
            {
                library.DisplayBooks();
            }

            // Check out book
            else if (choice == 2)
            {
                library.DisplayBooks();

                cout << "\nEnter Book ID: ";
                cin >> id;

                library.CheckOutBook(id);
            }

            // Return book
            else if (choice == 3)
            {
                library.DisplayBooks();

                cout << "\nEnter Book ID: ";
                cin >> id;

                library.ReturnBook(id);
            }

            // Search books
            else if (choice == 4)
            {
                cin.ignore();

                cout << "\nEnter search keyword: ";
                getline(cin, search);

                library.SearchBook(search);
            }

            // Exit
            else if (choice == 5)
            {
                cout << "\nThank you for using the Library System!\n";
            }

            // Invalid menu option
            else
            {
                throw out_of_range("Menu option does not exist.");
            }
        }

        // Catch invalid_argument
        catch (invalid_argument& e)
        {
            cout << "\nERROR: " << e.what() << endl;
            cout << "Condition: Non-numeric menu input.\n";
        }

        // Catch out_of_range
        catch (out_of_range& e)
        {
            cout << "\nERROR: " << e.what() << endl;
            cout << "Condition: Invalid menu selection.\n";
        }

    } while (choice != 5);

    return 0;
}