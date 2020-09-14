#include <iostream>
using namespace std;
int main()
{
    double totalMiles;
    double milesPerGallon;
    double gallons;

    cout << "Total miles for trip: ";
    cin >> totalMiles;

    cout << "Miles per gallon of vehicle: ";
    cin >> milesPerGallon;

    gallons = totalMiles / milesPerGallon;

    cout << endl;
    cout << "Miles for trip: ";
    cout << totalMiles << endl;
    cout << "Miles per gallon: ";
    cout << milesPerGallon << endl;
    cout << "Gallons needed: ";
    cout << gallons << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
