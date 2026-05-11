// ============================
// main.cpp
// ============================

// Include input/output library
#include <iostream>

// Include string library
#include <string>

// Include custom class headers
#include "Ninja.h"
#include "Pirate.h"

// Use standard namespace
using namespace std;

// Function to display intro screen
void GameIntro()
{
    // Display game title
    cout << "===================================" << endl;
    cout << "        WELCOME TO BATTLE QUEST    " << endl;
    cout << "===================================" << endl;
    cout << "Create your hero and prepare for battle!" << endl;
    cout << endl;
}

// Main function
int main()
{
    // Store player name
    string playerName;

    // Store menu choice
    int classChoice;

    // Store action choice
    int actionChoice;

    // Display intro
    GameIntro();

    // Ask player for character name
    cout << "Enter your character name: ";
    cin >> playerName;

    // Display class choices
    cout << endl;
    cout << "Choose your class:" << endl;
    cout << "1. Ninja" << endl;
    cout << "2. Pirate" << endl;
    cout << "Enter your choice: ";
    cin >> classChoice;

    // Add spacing
    cout << endl;

    // Player selected Ninja
    if (classChoice == 1)
    {
        // Create Ninja object
        Ninja ninja1(playerName, 100, "Steel Stars");

        // Welcome message
        cout << "Welcome, Ninja " << playerName << "!" << endl;

        // Display player stats
        ninja1.DisplayStats();

        // Start action menu loop
        do
        {
            // Display action menu
            cout << endl;
            cout << "====== NINJA ACTION MENU ======" << endl;
            cout << "1. Throw Stars" << endl;
            cout << "2. Show Weapon" << endl;
            cout << "3. View Stats" << endl;
            cout << "4. Exit Game" << endl;
            cout << "Choose an action: ";
            cin >> actionChoice;

            // Perform ThrowStars action
            if (actionChoice == 1)
            {
                ninja1.ThrowStars();
            }

            // Perform ShowWeapon action
            else if (actionChoice == 2)
            {
                ninja1.ShowWeapon();
            }

            // Display stats
            else if (actionChoice == 3)
            {
                ninja1.DisplayStats();
            }

            // Exit game
            else if (actionChoice == 4)
            {
                cout << "Exiting game..." << endl;
            }

            // Invalid input
            else
            {
                cout << "Invalid choice!" << endl;
            }

        } while (actionChoice != 4);
    }

    // Player selected Pirate
    else if (classChoice == 2)
    {
        // Create Pirate object
        Pirate pirate1(playerName, 120, "Black Pearl");

        // Welcome message
        cout << "Welcome, Pirate " << playerName << "!" << endl;

        // Display stats
        pirate1.DisplayStats();

        // Start action menu loop
        do
        {
            // Display action menu
            cout << endl;
            cout << "====== PIRATE ACTION MENU ======" << endl;
            cout << "1. Use Sword" << endl;
            cout << "2. Show Ship" << endl;
            cout << "3. View Stats" << endl;
            cout << "4. Exit Game" << endl;
            cout << "Choose an action: ";
            cin >> actionChoice;

            // Perform UseSword action
            if (actionChoice == 1)
            {
                pirate1.UseSword();
            }

            // Perform ShowShip action
            else if (actionChoice == 2)
            {
                pirate1.ShowShip();
            }

            // Display stats
            else if (actionChoice == 3)
            {
                pirate1.DisplayStats();
            }

            // Exit game
            else if (actionChoice == 4)
            {
                cout << "Exiting game..." << endl;
            }

            // Invalid input
            else
            {
                cout << "Invalid choice!" << endl;
            }

        } while (actionChoice != 4);
    }

    // Invalid class selection
    else
    {
        // Display error
        cout << "Invalid class selection!" << endl;
    }

    // Ending message
    cout << endl;
    cout << "Thank you for playing Battle Quest!" << endl;

    // End program successfully
    return 0;
}