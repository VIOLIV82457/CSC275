// Prevent duplicate inclusion
#pragma once

// Include Character class
#include "Character.h"

// Pirate subclass
class Pirate : public Character
{
private:

    // Pirate ship name
    string ShipName;

public:

    // Constructor
    Pirate(string name, int health, string shipName);

    // Sword method
    void UseSword();

    // Show ship method
    void ShowShip();

    // Override attack method
    virtual int Attack() override;

    // Override Help method
    virtual void Help() override;
};