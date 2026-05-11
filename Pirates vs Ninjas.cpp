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

// Function to display game intro
void GameIntro()
{
    // Display game title
    cout << "===================================" << endl;
    cout << "        WELCOME TO BATTLE QUEST    " << endl;
    cout << "===================================" << endl;
    cout << "Defeat the enemy before your health reaches zero!" << endl;
    cout << endl;
}

// Main function
int main()
{
    // Store player name
    string playerName;

    // Store class selection
    int classChoice;

    // Store action menu selection
    int actionChoice;

    // Store enemy health
    int enemyHealth = 100;

    // Display intro screen
    GameIntro();

    // Ask player for name
    cout << "Enter your character name: ";
    cin >> playerName;

    // Display class menu
    cout << endl;
    cout << "Choose your class:" << endl;
    cout << "1. Ninja" << endl;
    cout << "2. Pirate" << endl;
    cout << "Enter choice: ";
    cin >> classChoice;

    // Add spacing
    cout << endl;

    // ============================
    // NINJA GAMEPLAY
    // ============================

    // Check if player selected Ninja
    if (classChoice == 1)
    {
        // Create Ninja object
        Ninja ninja1(playerName, 100, "Steel Stars");

        // Welcome message
        cout << "Welcome, Ninja " << playerName << "!" << endl;

        // Start gameplay loop
        do
        {
            // Display current enemy health
            cout << endl;
            cout << "Enemy Health: " << enemyHealth << endl;

            // Display action menu
            cout << endl;
            cout << "====== NINJA ACTION MENU ======" << endl;
            cout << "1. Throw Stars" << endl;
            cout << "2. Heal" << endl;
            cout << "3. View Stats" << endl;
            cout << "4. Exit Game" << endl;
            cout << "Choose an action: ";
            cin >> actionChoice;

            // Throw stars attack
            if (actionChoice == 1)
            {
                // Use ninja attack
                ninja1.ThrowStars();

                // Damage enemy
                enemyHealth -= 20;

                // Prevent negative enemy health
                if (enemyHealth < 0)
                {
                    enemyHealth = 0;
                }

                // Show enemy health
                cout << "Enemy took 20 damage!" << endl;
                cout << "Enemy Health: " << enemyHealth << endl;

                // Enemy attacks player
                cout << "The enemy attacks back!" << endl;

                // Damage player
                ninja1.TakeDamage(15);

                // Display player health
                cout << "Your Health: " << ninja1.GetHealth() << endl;
            }

            // Heal option
            else if (actionChoice == 2)
            {
                // Heal player
                ninja1.Heal(10);

                // Display health
                cout << "Your Health: " << ninja1.GetHealth() << endl;
            }

            // View stats option
            else if (actionChoice == 3)
            {
                // Display player stats
                ninja1.DisplayStats();
                ninja1.ShowWeapon();
            }

            // Exit game option
            else if (actionChoice == 4)
            {
                // Exit message
                cout << "Exiting game..." << endl;
            }

            // Invalid input
            else
            {
                // Display error
                cout << "Invalid choice!" << endl;
            }

            // Check if enemy is defeated
            if (enemyHealth <= 0)
            {
                cout << endl;
                cout << "YOU WIN!" << endl;
                cout << "The enemy has been defeated!" << endl;
                break;
            }

            // Check if player died
            if (!ninja1.IsAlive())
            {
                cout << endl;
                cout << "GAME OVER!" << endl;
                break;
            }

        } while (actionChoice != 4);
    }

    // ============================
    // PIRATE GAMEPLAY
    // ============================

    // Check if player selected Pirate
    else if (classChoice == 2)
    {
        // Create Pirate object
        Pirate pirate1(playerName, 120, "Black Pearl");

        // Welcome message
        cout << "Welcome, Pirate " << playerName << "!" << endl;

        // Start gameplay loop
        do
        {
            // Display enemy health
            cout << endl;
            cout << "Enemy Health: " << enemyHealth << endl;

            // Display menu
            cout << endl;
            cout << "====== PIRATE ACTION MENU ======" << endl;
            cout << "1. Use Sword" << endl;
            cout << "2. Heal" << endl;
            cout << "3. View Stats" << endl;
            cout << "4. Exit Game" << endl;
            cout << "Choose an action: ";
            cin >> actionChoice;

            // Sword attack
            if (actionChoice == 1)
            {
                // Use sword attack
                pirate1.UseSword();

                // Damage enemy
                enemyHealth -= 25;

                // Prevent negative health
                if (enemyHealth < 0)
                {
                    enemyHealth = 0;
                }

                // Show enemy health
                cout << "Enemy took 25 damage!" << endl;
                cout << "Enemy Health: " << enemyHealth << endl;

                // Enemy attacks player
                cout << "The enemy attacks back!" << endl;

                // Damage pirate
                pirate1.TakeDamage(20);

                // Display current health
                cout << "Your Health: " << pirate1.GetHealth() << endl;
            }

            // Heal player
            else if (actionChoice == 2)
            {
                // Heal pirate
                pirate1.Heal(15);

                // Show updated health
                cout << "Your Health: " << pirate1.GetHealth() << endl;
            }

            // View stats
            else if (actionChoice == 3)
            {
                // Display pirate stats
                pirate1.DisplayStats();
                pirate1.ShowShip();
            }

            // Exit game
            else if (actionChoice == 4)
            {
                // Exit message
                cout << "Exiting game..." << endl;
            }

            // Invalid option
            else
            {
                // Show error
                cout << "Invalid choice!" << endl;
            }

            // Check if enemy lost
            if (enemyHealth <= 0)
            {
                cout << endl;
                cout << "YOU WIN!" << endl;
                cout << "The enemy has been defeated!" << endl;
                break;
            }

            // Check if pirate died
            if (!pirate1.IsAlive())
            {
                cout << endl;
                cout << "GAME OVER!" << endl;
                break;
            }

        } while (actionChoice != 4);
    }

    // Invalid class choice
    else
    {
        // Display error
        cout << "Invalid class selection!" << endl;
    }

    // Thank player
    cout << endl;
    cout << "Thank you for playing Battle Quest!" << endl;

    // End program successfully
    return 0;
}