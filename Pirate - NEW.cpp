// Include Pirate header
#include "Pirate.h"

// Pirate constructor
Pirate::Pirate(string name, int health, string shipName)
{
    // Set name
    Name = name;

    // Set health using setter
    SetHealth(health);

    // Set ship name
    ShipName = shipName;
}

// Sword attack
void Pirate::UseSword()
{
    cout << "I am Swooshing my Sword!" << endl;
}

// Display ship
void Pirate::ShowShip()
{
    cout << Name << "'s ship is: " << ShipName << endl;
}

// Override attack method
int Pirate::Attack()
{
    return 25;
}

// Override Help method
void Pirate::Help()
{
    cout << "Pirate Help Menu:" << endl;
    cout << "- Use your sword to attack enemies." << endl;
    cout << "- Pirates are strong fighters." << endl;
}