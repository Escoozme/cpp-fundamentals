#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    double gross, deduct, net;
    const double RATE = 0.25;
    const string QUIT = "XXX";
    const string REPORT_HEADING = "Payroll Report ";
    const string END_LINE = "***End of report ";
    // housekeeping() function
    cout << REPORT_HEADING << endl;
    cout << "Enter employee's name: ";
    cin >> name;

    while(name != QUIT)
    {
        // detailLoop() function
        cout << "Enter employee's gross pay: ";
        cin >> gross;
        cout << endl;
        deduct = gross * RATE;
        net = gross - deduct;
        cout << "Name: " << name << endl;
        cout << "Gross Pay: " << gross << endl;
        cout << "Deductions: " << deduct << endl;
        cout << "Net Pay: " << net << endl << endl;
        cout << "Enter employee's name: ";
        cin >> name;
    }
    // endOfJob() function
    cout << endl << END_LINE << endl << endl;

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
