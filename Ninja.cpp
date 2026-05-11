// Include Ninja header
#include "Ninja.h"

// Include input/output library
#include <iostream>

// Use standard namespace
using namespace std;

// Ninja constructor
Ninja::Ninja(string name, int health, string weapon)
{
    // Initialize inherited name
    Name = name;

    // Initialize inherited health
    Health = health;

    // Initialize weapon
    Weapon = weapon;
}

// Method for ninja attack
void Ninja::ThrowStars()
{
    cout << "I am throwing stars!" << endl;
}

// Method to show ninja weapon
void Ninja::ShowWeapon()
{
    cout << Name << "'s weapon is: " << Weapon << endl;
}