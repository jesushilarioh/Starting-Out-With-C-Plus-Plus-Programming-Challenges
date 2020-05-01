/**
 *  Here is the assignment: Write a program that calculates 
 * and displays the total travel expenses of a businessperson 
 * on a trip. The program should have functions that ask for 
 * and return the following:
 * 
 * • The total number of days spent on the trip
 * • The time of departure on the first day of the trip, and 
 *      the time of arrival back home on the last day of the trip
 * • The amount of any round-trip airfare
 * • The amount of any car rentals
 * • Miles driven, if a private vehicle was used. Calculate the 
 *      vehicle expense as $0.27 per mile driven
 * • Parking fees (The company allows up to $6 per day. Anything in 
 *      excess of this must be paid by the employee.)
 * • Taxi fees, if a taxi was used anytime during the trip (The 
 *      company allows up to $10 per day, for each day a taxi was 
 *      used. Anything in excess of this must be paid by the employee.)
 * • Conference or seminar registration fees
 * • Hotel expenses (The company allows up to $90 per night for 
 *      lodging. Anything in excess of this must be paid by the 
 *      employee.)
 * • The amount of each meal eaten. On the first day of the trip, 
 *      breakfast is allowed as an expense if the time of departure is 
 *      before 7 a.m. Lunch is allowed if the time of departure is before 
 *      12 noon. Dinner is allowed on the first day if the time of departure 
 *      is before 6 p.m. On the last day of the trip, breakfast is allowed 
 *      if the time of arrival is after 8 a.m. Lunch is allowed if the time 
 *      of arrival is after 1 p.m. Dinner is allowed on the last day if the 
 *      time of arrival is after 7 p.m. The program should only ask for the 
 *      amounts of allowable meals. (The company allows up to $9 for 
 *      breakfast, $12 for lunch, and $16 for dinner. Anything in excess 
 *      of this must be paid by the employee.)
 * 
 * The program should calculate and display the total expenses incurred by the 
 * businessperson, the total allowable expenses for the trip, the excess that 
 * must be reimbursed by the businessperson, if any, and the amount saved 
 * by the businessperson if the expenses were under the total allowed.
 * 
 * Input Validation: Do not accept negative numbers for any dollar 
 * amount or for miles driven in a private vehicle. Do not accept 
 * numbers less than 1 for the number of days. Only accept valid 
 * times for the time of departure and the time of arrival.
 */

#include <iostream>
using namespace std;

double inputValidate(double);
double inputValidate(double, int);
char inputValidate(char);
void getTotalDaysOnTrip(int &);
void getDepartureAndArrivalTimes(double &, double &);
void getRoundTripAirfare(double &);
void getCarRentals(double &);
void getPrivateVehicleUsed(double &);
void getParkingFees(int &, double &, double &, double &, double &);
void getTaxiFees(int &, double &, double &, double &, double &);
void getConferenceAndRegistrationFees(double &);
void getHotelFees(int &, double &, double &, double &, double &);
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
    char user_choice;

    getTotalDaysOnTrip(total_days_on_trip);
    getDepartureAndArrivalTimes(departure_time, arrival_time);
    getRoundTripAirfare(total_expenses);
    getCarRentals(total_expenses);
    getPrivateVehicleUsed(total_expenses);
    getParkingFees(total_days_on_trip, total_expenses, total_allowable_expenses, total_reimbursement, total_amount_saved);
    getTaxiFees(total_days_on_trip, total_expenses, total_allowable_expenses, total_reimbursement, total_amount_saved);
    getConferenceAndRegistrationFees(total_expenses);
    getHotelFees(total_days_on_trip, total_expenses, total_allowable_expenses, total_reimbursement, total_amount_saved);
    getMealFees(total_expenses, departure_time, total_allowable_expenses, total_reimbursement, total_amount_saved, arrival_time);       
    
    displayTotals(total_days_on_trip, departure_time, arrival_time, total_expenses, total_allowable_expenses, total_reimbursement, total_amount_saved);

    return 0;

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

double inputValidate(double time)
{
    while(!(cin >> time) || ((time < 0 || time > 23.59) || (time - static_cast<int>(time)) > .59))
    {
        cout << "Error: a valid time must be entered. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return time;
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
    cout << "\nAny round-trip airfare? ";
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
    cout << "\nAny car rentals? ";
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
    cout << "\nWas a private vehicle used? " << endl;
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

void getParkingFees(int &total_days_on_trip, 
                    double &total_expenses, 
                    double &total_allowable_expenses, 
                    double &total_reimbursement, 
                    double &total_amount_saved)
{
    cout << "\nAny parking fees? (The company allows up to $6 per day.): ";
    char user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        const double ALLOWABLE_EXPENSES = 6.00;
        double parking_fee, total_parking_fees = 0;

        for (int i = 0; i < total_days_on_trip; i++)
        {
            total_allowable_expenses += ALLOWABLE_EXPENSES;

            cout << "Enter parking fees for day #" << (i + 1) << ": $";
            parking_fee = inputValidate(parking_fee, 0);

            total_parking_fees += parking_fee;
            total_expenses += parking_fee;

            if (parking_fee > ALLOWABLE_EXPENSES)
                total_reimbursement += (parking_fee - ALLOWABLE_EXPENSES);

            else if (parking_fee <= ALLOWABLE_EXPENSES)
                total_amount_saved += parking_fee;
            
        }

    }

}

void getTaxiFees(int &total_days_on_trip, 
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
        double taxi_fee, total_taxi_fees = 0;

        for (int i = 0; i < total_days_on_trip; i++)
        {
            total_allowable_expenses += ALLOWABLE_EXPENSES;

            cout << "Enter taxi fees for day #" << (i + 1) << ": ";
            taxi_fee = inputValidate(taxi_fee, 0);
            total_taxi_fees += taxi_fee;
            total_expenses += taxi_fee;

            if (taxi_fee > ALLOWABLE_EXPENSES)
                total_reimbursement += (taxi_fee - ALLOWABLE_EXPENSES);

            else if (taxi_fee <= ALLOWABLE_EXPENSES)
                total_amount_saved += taxi_fee;
            
        }
        
    }

}

void getConferenceAndRegistrationFees(double &total_expenses)
{
    cout << "\nAny conference or seminar registration fees? ";
    char user_choice = inputValidate(user_choice);
    
    if (user_choice == 'Y' || user_choice == 'y')
    {
        double conference_or_seminar_fees = 0;

        cout << "Enter conference or seminar registration fees: ";
        conference_or_seminar_fees = inputValidate(conference_or_seminar_fees, 0);
        
        total_expenses += conference_or_seminar_fees;

    }

}

void getHotelFees(int &total_days_on_trip, 
                  double &total_expenses, 
                  double &total_allowable_expenses, 
                  double &total_reimbursement, 
                  double &total_amount_saved)
{
    const double ALLOWABLE_EXPENSES = 90.00;
    double hotel_fee, total_hotel_fees = 0;

    cout << "\nNow, enter hotel expenses. " << endl
         << "(The company allows up to $90 per night for lodging.): " << endl;

    for (int i = 0; i < (total_days_on_trip - 1); i++)
    {
        total_allowable_expenses += ALLOWABLE_EXPENSES;

        cout << "How much for night #" << (i + 1) << ": ";
        hotel_fee = inputValidate(hotel_fee, 0);

        total_hotel_fees += hotel_fee;
        total_expenses += hotel_fee;

        if (hotel_fee > ALLOWABLE_EXPENSES)
            total_reimbursement += (hotel_fee - ALLOWABLE_EXPENSES);

        else if (hotel_fee <= ALLOWABLE_EXPENSES)
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
                 
    double meal_fee, 
           total_meal_fees = 0;

    cout << "\nDid you eat a meal upon depature flight? ";
    char user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "How much was your meal? ";
        meal_fee = inputValidate(meal_fee, 0);
        total_meal_fees += meal_fee;
        total_expenses += meal_fee;

        if(departure_time < 7)
        {
            total_allowable_expenses += 9;

            if (meal_fee > 9)
                total_reimbursement += (meal_fee - 9);

            else if (meal_fee <= 9)
                total_amount_saved += meal_fee;
            
        }

        else if (departure_time >= 7 && departure_time < 12)
        {
            total_allowable_expenses += 12;

            if (meal_fee > 12)
                total_reimbursement += (meal_fee - 12);

            else if (meal_fee <= 12)
                total_amount_saved += meal_fee;

        }

        else if (departure_time >= 12 && departure_time < 18)
        {
            total_allowable_expenses += 16;

            if (meal_fee > 16)
                total_reimbursement += (meal_fee - 16);

            else if (meal_fee <= 16)
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
        total_meal_fees += meal_fee;
        total_expenses += meal_fee;

        if(arrival_time <= 8)
            total_reimbursement += meal_fee;

        else if(arrival_time > 8 && arrival_time <= 13)
        {
            total_allowable_expenses += 9;

            if (meal_fee > 9)
                total_reimbursement += (meal_fee - 9);

            else if (meal_fee <= 9)
                total_amount_saved += meal_fee;
        }

        else if (arrival_time > 13 && arrival_time <= 19)
        {
            total_allowable_expenses += 12;

            if (meal_fee > 12)
                total_reimbursement += (meal_fee - 12);

            else if (meal_fee <= 12)
                total_amount_saved += meal_fee;
        }

        else if (arrival_time > 19)
        {
            total_allowable_expenses += 16;

            if (meal_fee > 16)
                total_reimbursement += (meal_fee - 16);

            else if (meal_fee <= 16)
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