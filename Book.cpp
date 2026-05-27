#include "Book.h"

Book::Book(string t)
{
    title = t;
    checkedOut = false;
}

void Book::DisplayBook(int index)
{
    cout << index << ". " << title;

    // Display status
    if (checkedOut == true)
    {
        cout << " [Checked Out]";
    }
    else
    {
        cout << " [Available]";
    }

    cout << endl;
}