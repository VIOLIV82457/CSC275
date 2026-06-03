#include "Person.h"
#include <iostream>

using namespace std;

//Inheritance is implemented through the Person base class.

Person::Person()
{
    name = "";
    id = 0;
}

Person::Person(string name, int id)
{
    this->name = name;
    this->id = id;
}

void Person::displayInfo() const
{
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
}

string Person::getName() const
{
    return name;
}

int Person::getId() const
{
    return id;
}

Person::~Person()
{
}