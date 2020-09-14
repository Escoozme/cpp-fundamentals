#include <iostream>
using namespace std;
int main()
{
    double current;
    double resistance;
    double volts;

    cout << "Input current: ";
    cin >> current;

    cout << "Input resistance: ";
    cin >> resistance;

    volts = current * resistance;

    cout << "Voltage = " << volts << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
