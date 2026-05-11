// Prevent duplicate header inclusion
#pragma once

// Include Character superclass
#include "Character.h"

// Create Ninja subclass
class Ninja : public Character
{
private:

    // Private weapon property
    string Weapon;

public:

    // Constructor declaration
    Ninja(string name, int health, string weapon);

    // Method declaration for throwing stars
    void ThrowStars();

    // Method declaration for showing weapon
    void ShowWeapon();
};