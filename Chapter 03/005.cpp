#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const int HUNDRED = 100;
    
    int males,
        females,
        total;
    
    float per_males,
          per_females;
    
    // Ask user for number of males and females
    cout << endl;
    cout << "How many males in the class: ";
    cin >> males;
    cout << "How many females: ";
    cin >> females;
    cout << endl;
    
    // Calculate percentages
    total = males + females;
    
    per_males = (males / static_cast<float>(total)) * HUNDRED;

    per_females = (females / static_cast<float>(total)) * HUNDRED;
    
    // Display percentage
    cout << setprecision(1) << fixed;
    cout << "There are " << total << " students." << endl;
    cout << "The percentage of males is %" << per_males;
    cout << ",\nwhile, the percentage of females is %";
    cout << per_females << ".\n" << endl;
    
    // Terminate Program
    return 0;
}
