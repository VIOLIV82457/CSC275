// This file contains the implementation of the Pet class.

// Every time a Pet object is created or destroyed,a message is displayed. This helps demonstrate ho unique_ptr automatically manages memory.

#include "Pet.h"

// Default Constructor
// Creates a blank pet.
Pet::Pet()
{
    name = "Unknown";
    type = "Unknown";
    age = 0;

    cout << "\nA new blank pet has been created.\n";
}

// Parameterized Constructor
// Creates a pet with information provided by the user.
Pet::Pet(string petName, string petType, int petAge)
{
    name = petName;
    type = petType;
    age = petAge;

    cout << "\nCreating pet: " << name << endl;
}

// Destructor
// This is the important part of the assignment.//=========================================================
Pet::~Pet()
{
    cout << "\n----------------------------------------\n";
    cout << "Destructor Called!" << endl;
    cout << "Deleting pet: " << name << endl;
    cout << "Memory released automatically by unique_ptr." << endl;
    cout << "----------------------------------------\n";
}

// Setters
void Pet::setName(string petName)
{
    name = petName;
}

void Pet::setType(string petType)
{
    type = petType;
}

void Pet::setAge(int petAge)
{
    age = petAge;
}

// Getters
string Pet::getName() const
{
    return name;
}

string Pet::getType() const
{
    return type;
}

int Pet::getAge() const
{
    return age;
}

// Display Information
// Prints all information about the pet.
void Pet::displayInfo() const
{
    cout << "Name : " << name << endl;
    cout << "Type : " << type << endl;
    cout << "Age  : " << age << " years old" << endl;
}