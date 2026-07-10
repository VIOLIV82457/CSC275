// This class represents a pet adoption shelter.

// When a pet is adopted, ownership is MOVED from the availablePets vector to the adoptedPets vector.
#ifndef SHELTER_H
#define SHELTER_H

#include <iostream>
#include <vector>
#include <memory>

#include "Pet.h"

using namespace std;

class Shelter
{
private:

    // These vectors store smart pointers.
    // availablePets contains pets still in the shelter.
    // adoptedPets contains pets the user has adopted.
    
    // Each Pet has ONE owner at any given time.

    vector<unique_ptr<Pet>> availablePets;
    vector<unique_ptr<Pet>> adoptedPets;

public:

    // Constructor
    Shelter();

    // Destructor
    ~Shelter();

    // Member Functions
    void addPet();

    void displayAvailablePets() const;

    void adoptPet();

    void displayAdoptedPets() const;

    bool hasAvailablePets() const;
};

#endif