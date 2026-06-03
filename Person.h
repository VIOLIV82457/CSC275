#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//Polymorphism is demonstrated using virtual functions. EX: virtual void displayInfo() const;

//Derived classes override this method: void displayInfo() const override;

class Person
{
protected:
    string name;
    int id;

public:
    Person();
    Person(string name, int id);

    virtual void displayInfo() const;

    string getName() const;
    int getId() const;

    virtual ~Person();
};

#endif