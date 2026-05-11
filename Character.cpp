#include "Character.h"
#include <iostream>

using namespace std;

// Display character stats
void Character::DisplayStats()
{
    cout << "==========================" << endl;
    cout << "Character Name: " << Name << endl;
    cout << "Health: " << Health << endl;
    cout << "==========================" << endl;
}

// Return health value
int Character::GetHealth()
{
    return Health;
}