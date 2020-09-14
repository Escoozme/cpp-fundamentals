#include <iostream>
using namespace std;
int main()
{
    double balance;
    double rate;
    double yearly;
    double semiAnnual;
    double quarterly;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter rate: ";
    cin >> rate;

    yearly = balance * rate / 100;
    semiAnnual = balance * rate / 2 / 100;
    quarterly = balance * rate / 4 / 100;

    cout << "Annual Interest: " << yearly << endl;
    cout << "Semiannual Interest: " << semiAnnual << endl;
    cout << "Quarterly Interest: " << quarterly << endl << endl;

    cout << "Code by Jacob Smetana" << endl;
    return 0;
}
