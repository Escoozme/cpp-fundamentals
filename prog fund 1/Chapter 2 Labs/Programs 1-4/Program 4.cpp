#include <iostream>
using namespace std;
int main()
{
    double salary;
    double incomeTax;
    double ssTax;
    double netPay;

    cout << "Enter salary: $";
    cin >> salary;

    incomeTax = salary * .15;
    ssTax = salary * .0765;
    netPay = salary - (incomeTax + ssTax);

    cout << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Income Tax: $" << incomeTax << endl;
    cout << "ssTax: $" << ssTax << endl;
    cout << "Net Pay: $" << netPay << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
