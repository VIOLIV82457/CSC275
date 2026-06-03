#include "Journal.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Displays information about the program and how to use it.//

void displayInstructions()
{
    cout << "===================================\n";
    cout << "         DAILY JOURNAL APP\n";
    cout << "===================================\n";
    cout << "This program allows you to:\n";
    cout << "1. Write journal entries.\n";
    cout << "2. Save entries to a text file.\n";
    cout << "3. View saved entries.\n\n";

    cout << "Your entries are stored in journal.txt\n";
    cout << "and remain saved after the program closes.\n";
}

//Allows the user to enter text and saves it to a file.//

void addEntry()
{
    string entry;

    cin.ignore();

    cout << "\nWrite your journal entry:\n";
    getline(cin, entry);

    // Open file in append mode
    ofstream file("journal.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file.\n";
        return;
    }

    // Display on screen
    cout << "\nSaving Entry:\n";
    cout << entry << endl;

    // Save same text to file
    file << entry << endl;

    file.close();

    cout << "\nEntry saved successfully!\n";
}

//Reads all entries from the file and displays them.//

void viewEntries()
{
    ifstream file("journal.txt");

    if (!file)
    {
        cout << "\nNo journal entries found.\n";
        return;
    }

    string line;

    cout << "\n===== JOURNAL ENTRIES =====\n";

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}