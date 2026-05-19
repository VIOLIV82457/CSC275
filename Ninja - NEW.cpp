// Include Ninja header
#include "Ninja.h"

// Ninja constructor
Ninja::Ninja(string name, int health, string weapon)
{
    // Set name
    Name = name;

    // Set health using setter
    SetHealth(health);

    // Set weapon
    Weapon = weapon;
}

// Throw stars attack
void Ninja::ThrowStars()
{
    cout << "I am throwing stars!" << endl;
}

// Display weapon
void Ninja::ShowWeapon()
{
    cout << Name << "'s weapon is: " << Weapon << endl;
}

// Override attack method
int Ninja::Attack()
{
    return 25;
}

// Override Help method
void Ninja::Help()
{
    cout << "Ninja Help Menu:" << endl;
    cout << "- Throw stars to damage enemies." << endl;
    cout << "- Ninjas are quick and stealthy." << endl;
}