// Prevent duplicate header inclusion
#pragma once

// Include libraries
#include <iostream>
#include <string>

// Include GameStructure class
#include "GameStructure.h"

// Use standard namespace
using namespace std;

// Character class inherits from GameStructure
class Character : public GameStructure
{
public:

    // Public character name
    string Name;

private:

    // Encapsulated health property
    int Health;

public:

    // Default constructor
    Character();

    // Getter method for Health
    int GetHealth();

    // Setter method for Health
    void SetHealth(int health);

    // Display stats method
    void DisplayStats();

    // Talk method
    void Talk(string stuffToSay);

    // Overloaded Talk method
    void Talk(string name, string stuffToSay);

    // Virtual attack method
    virtual int Attack();

    // Help method override
    virtual void Help() override;
};