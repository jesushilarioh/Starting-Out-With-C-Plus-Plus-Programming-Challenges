#include <iostream>
using namespace std;

double inputValidate(double); // 6.30 = 6:30am, 21 = 9pm
double inputValidate(double, int); // $6.00
char inputValidate(char); // 'Y' or 'n'
void getTotalDaysOnTrip(int &);
void getDepartureAndArrivalTimes(double &, double &);
void getRoundTripAirfare(double &);
void getCarRentals(double &);
void getPrivateVehicleUsed(double &);
void getParkingFees(int, double &, double &, double &, double &);
void getTaxiFees(int, double &, double &, double &, double &);
void getConferenceAndRegistrationFees(double &);
void getHotelFees(int, double &, double &, double &, double &);
void getMealFees(double &, double, double &, double &, double &, double);

void displayTotals(int, double, double, double, double, double, double);

int main()
{
    double total_expenses = 0,
           total_allowable_expenses = 0,
           total_reimbursement = 0,
           total_amount_saved = 0,
           departure_time,
           arrival_time;
    
    int total_days_on_trip;

    getTotalDaysOnTrip(total_days_on_trip);
    getDepartureAndArrivalTimes(departure_time, arrival_time);
    getRoundTripAirfare(total_expenses);
    getCarRentals(total_expenses);
    getPrivateVehicleUsed(total_expenses);
    getParkingFees(total_days_on_trip,
                   total_expenses, 
                   total_allowable_expenses, 
                   total_reimbursement, 
                   total_amount_saved);
    getTaxiFees(total_days_on_trip, 
                total_expenses, 
                total_allowable_expenses, 
                total_reimbursement, 
                total_amount_saved);

    getConferenceAndRegistrationFees(total_expenses);

    getHotelFees(total_days_on_trip,
                 total_expenses, 
                 total_allowable_expenses, 
                 total_reimbursement, 
                 total_amount_saved);
                 
    getMealFees(total_expenses,
                departure_time, 
                total_allowable_expenses, 
                total_reimbursement, 
                total_amount_saved, 
                arrival_time);       
    
    displayTotals(total_days_on_trip,     ////// <-------
                  departure_time, 
                  arrival_time, 
                  total_expenses, 
                  total_allowable_expenses, 
                  total_reimbursement, 
                  total_amount_saved);

    return 0;
} // END int main()

double inputValidate(double time) // 24 hr; 630am = 6.30; 930pm = 21.30;
{
    //00:00 - 23:59 != -1, != 25.00
    // != 23:61
    // 4.50
    while(!(cin >> time) || 
           ((time < 0 || time > 23.59) || (time - static_cast<int>(time)) > .59))
    {
        cout << "Error: a valid time must be entered. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return time;
}

double inputValidate(double number, int range)
{
    while(!(cin >> number) || number < range)
    {
        cout << "Error: number must be greater than " << range << ". Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return number;
}

char inputValidate(char letter)
{
    cin >> letter;

    while (!(letter == 'Y' || letter == 'y' || letter == 'N' || letter == 'n'))
    {
        cout << "Error: enter 'Y' for Yes or 'N' for No. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> letter;
    }
    
    return letter;
}

void getTotalDaysOnTrip(int &total_days_on_trip)
{
    cout << "How many days spent on the trip? ";
    total_days_on_trip = inputValidate(total_days_on_trip, 0);
}

void getDepartureAndArrivalTimes(double &departure_time, double &arrival_time)
{
    cout << "\nWhat is the time of departure" << endl
         << "on the first day of the trip? " << endl << endl
         << "(Use 24 hour clock to enter departure and arrial times." << endl
         << "Also, instead of using a colon, use a decimal point." << endl
         << "For example, 6:30am = 6.30 and 9:30pm = 21.30): ";
    departure_time = inputValidate(departure_time);
    
    cout << "\nWhat is the time of arrival back" << endl
         << "home on the last day of trip? ";
    arrival_time = inputValidate(arrival_time);
}

void getRoundTripAirfare(double &total_expenses)
{
    cout << "\nAny round-trip airfare? (Y/N): ";
    char user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "What was the amount for round-trip airfare? $";
        double round_trip_airfare = inputValidate(round_trip_airfare, 0);
        total_expenses += round_trip_airfare;
    }
}

void getCarRentals(double &total_expenses)
{
    cout << "\nAny car rentals? (Y/N): ";
    char user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "What was the amount of car rental? $";
        double car_rental_fee = inputValidate(car_rental_fee, 0);
        total_expenses += car_rental_fee;
    }
}

void getPrivateVehicleUsed(double &total_expenses)
{
    cout << "\nWas a private vehicle used? (Y/N): " << endl;
    char user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        const double CENTS_PER_MILE = .27;

        cout << "How many miles driven? " << endl
             << "(The vehicle expense is calculated as $0.27 per mile driven): ";
        int miles_driven = inputValidate(miles_driven, 0); 
        total_expenses += (miles_driven * CENTS_PER_MILE);
    }
}

void getParkingFees(int total_days_on_trip, 
                    double &total_expenses, 
                    double &total_allowable_expenses, 
                    double &total_reimbursement, 
                    double &total_amount_saved)
{
    cout << "\nAny parking fees? (The company allows up to $6 per day.) (Y/N): ";
    char user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        const double ALLOWABLE_EXPENSES = 6.00;
        double parking_fee;

        for (int i = 0; i < total_days_on_trip; i++)
        {
            total_allowable_expenses += ALLOWABLE_EXPENSES;

            cout << "Enter parking fees for day #" << (i + 1) << ": $";
            parking_fee = inputValidate(parking_fee, 0);

            total_expenses += parking_fee;

            if (parking_fee > ALLOWABLE_EXPENSES) // 9 > 6
                total_reimbursement += (parking_fee - ALLOWABLE_EXPENSES);

            else if (parking_fee <= ALLOWABLE_EXPENSES)
                total_amount_saved += parking_fee; // 6.00
            
        }

    }

}

void getTaxiFees(int total_days_on_trip, 
                 double &total_expenses, 
                 double &total_allowable_expenses, 
                 double &total_reimbursement, 
                 double &total_amount_saved)
{
    cout << "\nAny Taxi fees? (The company allows up to $10 per day): ";
    char user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        const double ALLOWABLE_EXPENSES = 10.00;
        double taxi_fee;

        for (int i = 0; i < total_days_on_trip; i++)
        {
            total_allowable_expenses += ALLOWABLE_EXPENSES;

            cout << "Enter taxi fees for day #" << (i + 1) << ": ";
            taxi_fee = inputValidate(taxi_fee, 0);

            total_expenses += taxi_fee;

            if (taxi_fee > ALLOWABLE_EXPENSES) // 11.00 > 10.00 == 1.00
                total_reimbursement += (taxi_fee - ALLOWABLE_EXPENSES);

            else if (taxi_fee <= ALLOWABLE_EXPENSES) // 6.00 < 10.00 == 6.00
                total_amount_saved += taxi_fee;
            
        }
        
    }

}

void getConferenceAndRegistrationFees(double &total_expenses)
{
    cout << "\nAny conference or seminar registration fees? (Y/N): ";
    char user_choice = inputValidate(user_choice);
    
    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "Enter conference or seminar registration fees: ";
        double conference_or_seminar_fees = 
            inputValidate(conference_or_seminar_fees, 0);
        
        total_expenses += conference_or_seminar_fees;

    }

}

void getHotelFees(int total_days_on_trip, 
                  double &total_expenses, 
                  double &total_allowable_expenses, 
                  double &total_reimbursement, 
                  double &total_amount_saved)
{
    const double ALLOWABLE_EXPENSES = 90.00;
    double hotel_fee;

    cout << "\nNow, enter hotel expenses. " << endl
         << "(The company allows up to $90 per night for lodging.): " << endl;

    for (int i = 0; i < (total_days_on_trip - 1); i++) // 5 = 4 nights
    {
        total_allowable_expenses += ALLOWABLE_EXPENSES;

        cout << "How much for night #" << (i + 1) << ": ";
        hotel_fee = inputValidate(hotel_fee, 0);

        total_expenses += hotel_fee;

        if (hotel_fee > ALLOWABLE_EXPENSES) // 100 > 90 == 10
            total_reimbursement += (hotel_fee - ALLOWABLE_EXPENSES);

        else if (hotel_fee <= ALLOWABLE_EXPENSES) // 80 < 90 = 80
            total_amount_saved += hotel_fee;
        
    }

}

void getMealFees(double &total_expenses, 
                 double departure_time, 
                 double &total_allowable_expenses, 
                 double &total_reimbursement,
                 double &total_amount_saved, 
                 double arrival_time)
{
    const double ALLOWABLE_BREAKFAST = 9.00,
                 ALLOWABLE_LUNCH = 12.00,
                 ALLOWABLE_DINNER = 16.00;
                 
    double meal_fee;

    cout << "\nDid you eat a meal upon depature flight? (Y/N): ";
    char user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "How much was your meal? ";
        meal_fee = inputValidate(meal_fee, 0);

        total_expenses += meal_fee;

        if(departure_time < 7)
        {
            total_allowable_expenses += ALLOWABLE_BREAKFAST;

            if (meal_fee > ALLOWABLE_BREAKFAST) // 11 > 9 = 2.00
                total_reimbursement += (meal_fee - ALLOWABLE_BREAKFAST);

            else if (meal_fee <= ALLOWABLE_BREAKFAST)
                total_amount_saved += meal_fee; // 8 < 9 
            
        }

        else if (departure_time >= 7 && departure_time < 12)
        {
            total_allowable_expenses += ALLOWABLE_LUNCH;

            if (meal_fee > ALLOWABLE_LUNCH) // 13 > 12 = $1.00
                total_reimbursement += (meal_fee - ALLOWABLE_LUNCH);

            else if (meal_fee <= ALLOWABLE_LUNCH) // 3.00 > 12 =
                total_amount_saved += meal_fee;

        }

        else if (departure_time >= 12 && departure_time < 18)
        {
            total_allowable_expenses += ALLOWABLE_DINNER;

            if (meal_fee > ALLOWABLE_DINNER)
                total_reimbursement += (meal_fee - ALLOWABLE_DINNER);

            else if (meal_fee <= ALLOWABLE_DINNER)
                total_amount_saved += meal_fee;
        }

        else if (departure_time >= 18)
            total_reimbursement += meal_fee;

    }

    cout << "\nDid you eat a meal when upon arrival flight? ";
    user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "How much was your meal? ";
        meal_fee = inputValidate(meal_fee, 0);

        total_expenses += meal_fee;

        if(arrival_time <= 8)
            total_reimbursement += meal_fee;

        else if(arrival_time > 8 && arrival_time <= 13)
        {
            total_allowable_expenses += ALLOWABLE_BREAKFAST;

            if (meal_fee > ALLOWABLE_BREAKFAST)
                total_reimbursement += (meal_fee - ALLOWABLE_BREAKFAST);

            else if (meal_fee <= ALLOWABLE_BREAKFAST)
                total_amount_saved += meal_fee;
        }

        else if (arrival_time > 13 && arrival_time <= 19)
        {
            total_allowable_expenses += ALLOWABLE_LUNCH;

            if (meal_fee > ALLOWABLE_LUNCH) // 13.00 > 12.00 == 1.00
                total_reimbursement += (meal_fee - ALLOWABLE_LUNCH);

            else if (meal_fee <= ALLOWABLE_LUNCH)
                total_amount_saved += meal_fee; // 12.00 < n;
        }

        else if (arrival_time > 19)
        {
            total_allowable_expenses += ALLOWABLE_DINNER;

            if (meal_fee > ALLOWABLE_DINNER)
                total_reimbursement += (meal_fee - ALLOWABLE_DINNER);

            else if (meal_fee <= ALLOWABLE_DINNER)
                total_amount_saved += meal_fee;
        }
    }

}

void displayTotals(int total_days_on_trip,
                   double departure_time,
                   double arrival_time,
                   double total_expenses,
                   double total_allowable_expenses,
                   double total_reimbursement,
                   double total_amount_saved)
{
    cout << "\nTotal days on trip: " << total_days_on_trip << endl; 
    cout << "Time of departure: " << departure_time << endl;
    cout << "Time of arrival: " << arrival_time << endl;
    cout << "Total expenses: $" << total_expenses << endl;
    cout << "Total allowable expenses: $" << total_allowable_expenses << endl;
    cout << "Total reimbursement: $" << total_reimbursement << endl;
    cout << "Total amount saved: $" << total_amount_saved << endl << endl;
}