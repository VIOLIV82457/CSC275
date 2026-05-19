// Include Character header
#include "Character.h"

// Character constructor
Character::Character()
{
    // Set default health
    Health = 100;
}

// Getter method
int Character::GetHealth()
{
    return Health;
}

// Setter method
void Character::SetHealth(int health)
{
    // Check if health is below zero
    if (health < 0)
    {
        // Set health to zero
        Health = 0;

        // Display expiration message
        cout << "Character has Expired..." << endl;
    }
    else
    {
        // Set health normally
        Health = health;
    }
}

// Display character stats
void Character::DisplayStats()
{
    cout << "======================" << endl;
    cout << "Name: " << Name << endl;
    cout << "Health: " << Health << endl;
    cout << "======================" << endl;
}

// First Talk method
void Character::Talk(string stuffToSay)
{
    // Display speech
    cout << Name << ": " << stuffToSay << endl;
}

// Overloaded Talk method
void Character::Talk(string name, string stuffToSay)
{
    // Display custom name and speech
    cout << name << ": " << stuffToSay << endl;
}

// Virtual attack method
int Character::Attack()
{
    // Return base attack damage
    return 10;
}

// Help method override
void Character::Help()
{
    cout << "Character Help Menu:" << endl;
    cout << "- Use attacks to defeat enemies." << endl;
    cout << "- Keep your health above zero." << endl;
}