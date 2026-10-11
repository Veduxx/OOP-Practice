//Design a class Book with private data members bookId, title, and isIssued.
//Provide public member functions setBook(), issueBook(), returnBook(), and displayStatus(). 
//Create two book objects and demonstrate issue/return operations.
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookId;
    string title;
    bool isIssued;

public:
    void setBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Title: ";
        cin >> ws;
        getline(cin, title);

        isIssued = false;
    }

    void issueBook()
    {
        if (isIssued == false)
        {
            isIssued = true;
            cout << title << " has been issued successfully." << endl;
        }
        else
        {
            cout << title << " is already issued." << endl;
        }
    }

    void returnBook()
    {
        if (isIssued == true)
        {
            isIssued = false;
            cout << title << " has been returned successfully." << endl;
        }
        else
        {
            cout << title << " was not issued." << endl;
        }
    }

    void displayStatus()
    {
        cout << "\nBook ID: " << bookId << endl;
        cout << "Book Title: " << title << endl;

        if (isIssued == true)
            cout << "Status: Issued" << endl;
        else
            cout << "Status: Available" << endl;
    }
};

int main()
{
    Book b1, b2;

    cout << "Enter details of Book 1:" << endl;
    b1.setBook();

    cout << "\nEnter details of Book 2:" << endl;
    b2.setBook();

    cout << "\n--- Issue Operations ---" << endl;
    b1.issueBook();
    b2.issueBook();

    cout << "\n--- Book Status After Issue ---" << endl;
    b1.displayStatus();
    b2.displayStatus();

    cout << "\n--- Return Operation ---" << endl;
    b1.returnBook();

    cout << "\n--- Final Book Status ---" << endl;
    b1.displayStatus();
    b2.displayStatus();

    return 0;
}
