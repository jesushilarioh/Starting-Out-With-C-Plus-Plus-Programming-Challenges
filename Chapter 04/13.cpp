/********************************************************************
*
*	13. Book Club Points
*
*       Serendipity Booksellers has a book club that awards points
*       to its customers based on the number of books purchased each
*       month. The points are awarded as follows:
*
*       • If a customer purchases 0 books, he or she earns 0 points.
*       • If a customer purchases 1 book, he or she earns 5 points.
*       • If a customer purchases 2 books, he or she earns 15 points.
*       • If a customer purchases 3 books, he or she earns 30 points.
*       • If a customer purchases 4 or more books, he or she earns 60 points.
*
*       Write a program that asks the user to enter the number of
*       books that he or she has purchased this month and then displays
*       the number of points awarded.
*
* 	By: Jesus Hilario Hernandez
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int books_purchased;

    // Get number of books user purchased this month.
    cout << "\nHow many books did you purchase this month: ";
    cin >> books_purchased;

    // Format a line break
    cout << endl;

    // Decision statement to determine points earned
    if (books_purchased == 0)
        cout << "0 points earned\n";
    else if (books_purchased == 1)
        cout << "5 points earned\n";
    else if (books_purchased == 2)
        cout << "15 points earned\n";
    else if (books_purchased == 3)
        cout << "30 points earned\n";
    else if (books_purchased >= 4)
        cout << "60 points earned\n";
    else
    {
        cout << "Oops. A number 0 or greater must be entered.";
        cout << "\nPlease rerun the program and try again.\n";
    }

    return 0;
}