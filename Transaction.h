#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
using namespace std;

class Transaction
{
private:
    string memberName;
    string bookTitle;
    string action;

public:
    Transaction();

    Transaction(
        string memberName,
        string bookTitle,
        string action);

    void displayTransaction() const;
};

#endif