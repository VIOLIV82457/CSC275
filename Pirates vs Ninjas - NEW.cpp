// ============================
// main.cpp
// ============================

// Include libraries
#include <iostream>
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
    cout << "         PIRATES VS NINJAS         " << endl;
    cout << "===================================" << endl;
    cout << "Defeat the enemy before your health reaches zero!" << endl;
    cout << endl;
}

// Main function
int main()
{
    // Store player name
    string playerName;

    // Store class choice
    int classChoice;

    // Store menu action choice
    int actionChoice;

    // Store enemy health
    int enemyHealth = 100;

    // Display intro
    GameIntro();

    // Ask player for name
    cout << "Enter your character name: ";
    cin >> playerName;

    // Display class menu
    cout << endl;
    cout << "Choose your class:" << endl;
    cout << "1. Ninja" << endl;
    cout << "2. Pirate" << endl;
    cout << "Enter your choice: ";
    cin >> classChoice;

    // Add spacing
    cout << endl;

    // ============================
    // NINJA GAMEPLAY
    // ============================

    // Check if Ninja was selected
    if (classChoice == 1)
    {
        // Create Ninja object
        Ninja ninja1(playerName, 100, "Steel Stars");

        // Welcome message
        cout << "Welcome, Ninja " << playerName << "!" << endl;

        // Start gameplay loop
        do
        {
            // Display enemy health
            cout << endl;
            cout << "Enemy Health: " << enemyHealth << endl;

            // Display player health
            cout << "Your Health: " << ninja1.GetHealth() << endl;

            // Display menu
            cout << endl;
            cout << "====== NINJA ACTION MENU ======" << endl;
            cout << "1. Throw Stars" << endl;
            cout << "2. Heal" << endl;
            cout << "3. View Stats" << endl;
            cout << "4. Talk" << endl;
            cout << "5. Help" << endl;
            cout << "6. Exit Game" << endl;
            cout << "Choose an action: ";
            cin >> actionChoice;

            // Throw stars attack
            if (actionChoice == 1)
            {
                // Use attack animation
                ninja1.ThrowStars();

                // Store attack damage
                int damage = ninja1.Attack();

                // Damage enemy
                enemyHealth -= damage;

                // Prevent negative enemy health
                if (enemyHealth < 0)
                {
                    enemyHealth = 0;
                }

                // Display damage
                cout << "You dealt " << damage << " damage!" << endl;

                // Enemy attacks back
                cout << "The enemy attacks back!" << endl;

                // Damage player using setter
                ninja1.SetHealth(ninja1.GetHealth() - 15);
            }

            // Heal player
            else if (actionChoice == 2)
            {
                // Heal player
                ninja1.SetHealth(ninja1.GetHealth() + 10);

                // Display heal message
                cout << "You healed for 10 health!" << endl;
            }

            // Display stats
            else if (actionChoice == 3)
            {
                // Display stats
                ninja1.DisplayStats();

                // Show weapon
                ninja1.ShowWeapon();
            }

            // Talk option
            else if (actionChoice == 4)
            {
                // Use Talk method
                ninja1.Talk("You will never defeat me!");
            }

            // Help option
            else if (actionChoice == 5)
            {
                // Display help menu
                ninja1.Help();
            }

            // Exit game
            else if (actionChoice == 6)
            {
                // Exit message
                cout << "Exiting game..." << endl;
            }

            // Invalid input
            else
            {
                // Error message
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

            // Check if player lost
            if (ninja1.GetHealth() <= 0)
            {
                cout << endl;
                cout << "GAME OVER!" << endl;
                break;
            }

        } while (actionChoice != 6);
    }

    // ============================
    // PIRATE GAMEPLAY
    // ============================

    // Check if Pirate was selected
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

            // Display player health
            cout << "Your Health: " << pirate1.GetHealth() << endl;

            // Display menu
            cout << endl;
            cout << "====== PIRATE ACTION MENU ======" << endl;
            cout << "1. Use Sword" << endl;
            cout << "2. Heal" << endl;
            cout << "3. View Stats" << endl;
            cout << "4. Talk" << endl;
            cout << "5. Help" << endl;
            cout << "6. Exit Game" << endl;
            cout << "Choose an action: ";
            cin >> actionChoice;

            // Use sword attack
            if (actionChoice == 1)
            {
                // Attack animation
                pirate1.UseSword();

                // Store attack damage
                int damage = pirate1.Attack();

                // Damage enemy
                enemyHealth -= damage;

                // Prevent negative enemy health
                if (enemyHealth < 0)
                {
                    enemyHealth = 0;
                }

                // Display attack damage
                cout << "You dealt " << damage << " damage!" << endl;

                // Enemy attacks back
                cout << "The enemy attacks back!" << endl;

                // Damage pirate
                pirate1.SetHealth(pirate1.GetHealth() - 20);
            }

            // Heal pirate
            else if (actionChoice == 2)
            {
                // Heal pirate
                pirate1.SetHealth(pirate1.GetHealth() + 15);

                // Display healing message
                cout << "You healed for 15 health!" << endl;
            }

            // Display stats
            else if (actionChoice == 3)
            {
                // Display stats
                pirate1.DisplayStats();

                // Show ship
                pirate1.ShowShip();
            }

            // Talk option
            else if (actionChoice == 4)
            {
                // Use Talk method
                pirate1.Talk("Ahoy! Prepare for battle!");
            }

            // Help option
            else if (actionChoice == 5)
            {
                // Display help
                pirate1.Help();
            }

            // Exit game
            else if (actionChoice == 6)
            {
                // Exit message
                cout << "Exiting game..." << endl;
            }

            // Invalid choice
            else
            {
                // Error message
                cout << "Invalid choice!" << endl;
            }

            // Check enemy defeat
            if (enemyHealth <= 0)
            {
                cout << endl;
                cout << "YOU WIN!" << endl;
                cout << "The enemy has been defeated!" << endl;
                break;
            }

            // Check player defeat
            if (pirate1.GetHealth() <= 0)
            {
                cout << endl;
                cout << "GAME OVER!" << endl;
                break;
            }

        } while (actionChoice != 6);
    }

    // Invalid class selection
    else
    {
        // Error message
        cout << "Invalid class selection!" << endl;
    }

    // Thank player
    cout << endl;
    cout << "Thank you for playing Pirates vs Ninjas!" << endl;

    // End program
    return 0;
}