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