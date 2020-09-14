#include <iostream>
using namespace std;
int main()
{
    double hours;
    double gallons;

    cout << "Enter trip length in hours: ";
    cin >> hours;

    gallons = hours * 4776 + 4100;

    cout << "Fuel needed for trip: ";
    cout << gallons << " gallons" << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
