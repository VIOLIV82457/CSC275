#include <iostream>
#include "Journal.h"

using namespace std;

int main()
{
    int choice;

    displayInstructions();

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Add Journal Entry\n";
        cout << "2. View Journal Entries\n";
        cout << "3. Exit\n";
        cout << "==========================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addEntry();
                break;

            case 2:
                viewEntries();
                break;

            case 3:
                cout << "\nGoodbye!\n";
                break;

            default:
                cout << "\nInvalid choice.\n";
        }

    } while (choice != 3);

    return 0;
}