// Include Pirate header
#include "Pirate.h"

// Include input/output library
#include <iostream>

// Use standard namespace
using namespace std;

// Pirate constructor
Pirate::Pirate(string name, int health, string shipName)
{
    // Initialize inherited name
    Name = name;

    // Initialize inherited health
    Health = health;

    // Initialize ship name
    ShipName = shipName;
}

// Method for pirate attack
void Pirate::UseSword()
{
    cout << "I am Swooshing my Sword!" << endl;
}

// Method to display ship name
void Pirate::ShowShip()
{
    cout << Name << "'s ship is: " << ShipName << endl;
}