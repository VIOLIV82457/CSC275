// This file contains the implementation of the Shelter class.
// This is where the smart pointers are actually used.
#include "Shelter.h"

#include <limits>

// Constructor
Shelter::Shelter()
{
    cout << "\nOpening the Pet Adoption Shelter...\n";
}

// Destructor
Shelter::~Shelter()
{
    cout << "\nClosing the Pet Adoption Shelter...\n";
    cout << "The shelter is going out of scope.\n";
    cout << "Any remaining pets will now be removed from memory.\n";
}

// Add a Pet
void Shelter::addPet()
{
    string name;
    string type;
    int age;

    cout << "\n========== Add a New Pet ==========\n";

    cout << "Enter pet name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);

    cout << "Enter pet type (Dog, Cat, etc.): ";
    getline(cin, type);

    cout << "Enter pet age: ";

    while (!(cin >> age) || age < 0)
    {
        cout << "Invalid age. Please enter a non-negative number: ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Create the Pet object using a smart pointer.
    availablePets.push_back(unique_ptr<Pet>(new Pet(name, type, age)));
    cout << "\nPet successfully added to the shelter!\n";
}

// Display Available Pets
void Shelter::displayAvailablePets() const
{
    cout << "\n========== Available Pets ==========\n";

    if (availablePets.empty())
    {
        cout << "There are currently no pets available.\n";
        return;
    }

    for (size_t i = 0; i < availablePets.size(); i++)
    {
        cout << "\nPet #" << i + 1 << endl;

        availablePets[i]->displayInfo();
    }
}

// Adopt a Pet
void Shelter::adoptPet()
{
    if (availablePets.empty())
    {
        cout << "\nThere are no pets available to adopt.\n";
        return;
    }

    displayAvailablePets();

    int choice;

    cout << "\nEnter the number of the pet to adopt: ";

    while (!(cin >> choice) ||
           choice < 1 ||
           choice > static_cast<int>(availablePets.size()))
    {
        cout << "Invalid selection. Try again: ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nTransferring ownership using std::move()...\n";

    // Move ownership into the adopted pets vector.
    adoptedPets.push_back(move(availablePets[choice - 1]));

    // Remove the now-empty unique_ptr from the available list.
    availablePets.erase(availablePets.begin() + (choice - 1));

    cout << "Success!\n";
    cout << "The pet has been adopted.\n";
    cout << "Notice that ownership has been transferred,\n";
    cout << "not copied.\n";
}

// Display Adopted Pets
void Shelter::displayAdoptedPets() const
{
    cout << "\n========== Adopted Pets ==========\n";

    if (adoptedPets.empty())
    {
        cout << "No pets have been adopted yet.\n";
        return;
    }

    for (size_t i = 0; i < adoptedPets.size(); i++)
    {
        cout << "\nAdopted Pet #" << i + 1 << endl;

        adoptedPets[i]->displayInfo();
    }
}

// Returns true if pets are available.
bool Shelter::hasAvailablePets() const
{
    return !availablePets.empty();
}