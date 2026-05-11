#include "Character.h"

using namespace std;

// Display character stats
void Character::DisplayStats()
{
    cout << "======================" << endl;
    cout << "Name: " << Name << endl;
    cout << "Health: " << Health << endl;
    cout << "======================" << endl;
}

// Return health
int Character::GetHealth()
{
    return Health;
}

// Reduce health
void Character::TakeDamage(int damage)
{
    // Lower health
    Health -= damage;

    // Prevent negative health
    if (Health < 0)
    {
        Health = 0;
    }

    // Show damage message
    cout << Name << " took " << damage << " damage!" << endl;
}

// Heal character
void Character::Heal(int amount)
{
    // Increase health
    Health += amount;

    // Show healing message
    cout << Name << " healed for " << amount << " health!" << endl;
}

// Check if alive
bool Character::IsAlive()
{
    // Return true if health is above 0
    return Health > 0;
}