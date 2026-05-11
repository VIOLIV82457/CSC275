#pragma once

#include <string>

using namespace std;

class Character
{
public:

    string Name;

protected:

    int Health;

public:

    void DisplayStats();

    int GetHealth();
};