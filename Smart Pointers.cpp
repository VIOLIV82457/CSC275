#include <iostream>
#include <limits>

#include "Shelter.h"

using namespace std;

// Main Function
int main()
{
    // Welcome Screen
    cout << "=====================================================\n";
    cout << "          PET ADOPTION CENTER\n";
    cout << "=====================================================\n\n";

    cout << "Welcome!\n\n";

    cout << "This program demonstrates the use of C++ smart pointers.\n\n";

    // Create one Shelter object.
    Shelter shelter;

    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "               MAIN MENU\n";
        cout << "=========================================\n";
        cout << "1. Add a Pet\n";
        cout << "2. View Available Pets\n";
        cout << "3. Adopt a Pet\n";
        cout << "4. View Adopted Pets\n";
        cout << "5. Exit Program\n";
        cout << "=========================================\n";
        cout << "Enter your choice: ";

        while (!(cin >> choice))
        {
            cout << "Invalid input.\n";
            cout << "Please enter a number from 1-5: ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice)
        {
        case 1:

            shelter.addPet();

            break;

        case 2:

            shelter.displayAvailablePets();

            break;

        case 3:

            shelter.adoptPet();

            break;

        case 4:

            shelter.displayAdoptedPets();

            break;

        case 5:

            cout << "\n=========================================\n";
            cout << "Exiting Program...\n";
            cout << "=========================================\n";

            cout << "\nNotice what happens next.\n";
            cout << "As the Shelter object goes out of scope,\n";
            cout << "all remaining unique_ptr objects are destroyed.\n";
            cout << "Each Pet object is automatically deleted.\n\n";

            break;

        default:

            cout << "\nPlease choose a number between 1 and 5.\n";
        }

    } while (choice != 5);

    cout << "\nProgram finished successfully.\n";

    return 0;
}