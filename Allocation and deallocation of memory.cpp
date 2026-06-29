#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

// Function Prototypes
void intLesson();
void doubleLesson();
void charLesson();
void boolLesson();
void studentLesson();

// Main Function
int main()
{
    int choice;

    cout << "======================================================" << endl;
    cout << "      Welcome to the Dynamic Memory Learning Program" << endl;
    cout << "======================================================" << endl;

    cout << "\nThis program teaches you about dynamic memory allocation" << endl;
    cout << "using the NEW and DELETE keywords in C++." << endl;

    cout << "\nNEW allocates memory on the HEAP." << endl;
    cout << "DELETE releases that memory when you are finished using it." << endl;
    cout << "If you forget to use DELETE, your program may create" << endl;
    cout << "memory leaks." << endl;

    do
    {
        cout << "\n======================================" << endl;
        cout << "      Dynamic Memory Learning Menu" << endl;
        cout << "======================================" << endl;
        cout << "1. Learn about int allocation" << endl;
        cout << "2. Learn about double allocation" << endl;
        cout << "3. Learn about char allocation" << endl;
        cout << "4. Learn about bool allocation" << endl;
        cout << "5. Create 5 Student Objects" << endl;
        cout << "6. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            intLesson();
            break;

        case 2:
            doubleLesson();
            break;

        case 3:
            charLesson();
            break;

        case 4:
            boolLesson();
            break;

        case 5:
            studentLesson();
            break;

        case 6:
            cout << "\nThank you for learning about dynamic memory!" << endl;
            break;

        default:
            cout << "\nInvalid choice. Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}

// Integer lesson

void intLesson()
{
    cout << "\n--- Integer Allocation Lesson ---" << endl;

    cout << "Using NEW allocates memory for an integer on the heap."
         << endl;

    int* number = new int;

    cout << "Enter an integer: ";
    cin >> *number;

    cout << "\nMemory has been allocated!" << endl;
    cout << "Stored Value: " << *number << endl;
    cout << "Memory Address: " << number << endl;

    cout << "\nDeleting the allocated memory..." << endl;

    delete number;
    number = nullptr;
    
    cout << "Memory successfully deallocated using DELETE." << endl;
}


// Double lesson

void doubleLesson()
{
    cout << "\n--- Double Allocation Lesson ---" << endl;

    cout << "Using NEW allocates memory for a double." << endl;

    double* decimal = new double;

    cout << "Enter a decimal number: ";
    cin >> *decimal;

    cout << "\nStored Value: " << *decimal << endl;
    cout << "Memory Address: " << decimal << endl;

    cout << "\nDeleting the allocated memory..." << endl;

    delete decimal;
    decimal = nullptr;
    
    cout << "Memory successfully deallocated." << endl;
}
// Character lesson

void charLesson()
{
    cout << "\n--- Character Allocation Lesson ---" << endl;

    cout << "Using NEW allocates memory for a character." << endl;

    char* letter = new char;

    cout << "Enter one character: ";
    cin >> *letter;

    cout << "\nStored Value: " << *letter << endl;

    cout << "Memory Address: "
         << static_cast<void*>(letter) << endl;

    cout << "\nDeleting the allocated memory..." << endl;

    delete letter;
    letter = nullptr;


    cout << "Memory successfully deallocated." << endl;
}


// Boolean lesson

void boolLesson()
{
    cout << "\n--- Boolean Allocation Lesson ---" << endl;

    cout << "Using NEW allocates memory for a boolean value."
         << endl;

    bool* answer = new bool;

    cout << "Enter 1 for true or 0 for false: ";
    cin >> *answer;

    cout << "\nStored Value: " << *answer << endl;
    cout << "Memory Address: " << answer << endl;

    cout << "\nDeleting the allocated memory..." << endl;

    delete answer;
    answer = nullptr;
    

    cout << "Memory successfully deallocated." << endl;
}

//Objects lesson
void studentLesson()
{
    cout << "\n--- Creating Student Objects on the Heap ---" << endl;

    cout << "\nWe will create FIVE Student objects using NEW."
         << endl;

    Student* students[5];

    string name;
    int age;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent #" << i + 1 << endl;

        cout << "Enter student's name: ";
        cin >> name;

        cout << "Enter student's age: ";
        cin >> age;

        students[i] = new Student(name, age);
    }

    cout << "\n==================================" << endl;
    cout << "Displaying Student Information" << endl;
    cout << "==================================" << endl;

    for (int i = 0; i < 5; i++)
    {
        students[i]->display();
    }

    cout << "\nNow we will delete each object." << endl;
    cout << "DELETE releases the memory occupied by each object."
         << endl;

    for (int i = 0; i < 5; i++)
    {
        delete students[i];
        students[i] = nullptr;
    }

    cout << "\nAll Student objects have been deleted." << endl;
}