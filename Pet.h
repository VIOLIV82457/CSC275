// This class represents one pet that can be adopted.

// This project demonstrates the use of smart pointers.
// Each Pet object will eventually be owned by a unique_ptr.

#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>

using namespace std;

class Pet
{
private:

    // Private Data Members
    string name;
    string type;
    int age;

public:

    // Constructors

    Pet();

    Pet(string petName, string petType, int petAge);

    // Destructor
    ~Pet();

    // Setters
    void setName(string petName);
    void setType(string petType);
    void setAge(int petAge);

    // Getters
    string getName() const;
    string getType() const;
    int getAge() const;

    // Display Function
    void displayInfo() const;
};

#endif