#pragma once

#include <string>
#include <iostream>

using namespace std;

class Character
{
public:

    // Public character name
    string Name;

protected:

    // Encapsulated health value
    int Health;

public:

    // Display character stats
    void DisplayStats();

    // Return current health
    int GetHealth();

    // Reduce health
    void TakeDamage(int damage);

    // Increase health
    void Heal(int amount);

    // Check if alive
    bool IsAlive();
};