// Prevent duplicate header inclusion
#pragma once

// Include Character superclass
#include "Character.h"

// Create Pirate subclass
class Pirate : public Character
{
private:

    // Private ship name property
    string ShipName;

public:

    // Constructor declaration
    Pirate(string name, int health, string shipName);

    // Method declaration for sword attack
    void UseSword();

    // Method declaration for showing ship
    void ShowShip();
};