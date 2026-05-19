// Prevent duplicate inclusion
#pragma once

// Include Character class
#include "Character.h"

// Ninja subclass
class Ninja : public Character
{
private:

    // Ninja weapon
    string Weapon;

public:

    // Constructor
    Ninja(string name, int health, string weapon);

    // Throw stars method
    void ThrowStars();

    // Show weapon method
    void ShowWeapon();

    // Override attack method
    virtual int Attack() override;

    // Override Help method
    virtual void Help() override;
};