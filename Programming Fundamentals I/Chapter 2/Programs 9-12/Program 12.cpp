#include <iostream>
using namespace std;
int main()
{
    double dollars;
    double euros;
    double yen;

    cout << "Enter dollar amount: $";
    cin >> dollars;

    euros = dollars * .85;
    yen = dollars * 112.54;

    cout << endl;
    cout << "Conversion to Euros: ";
    cout << euros << " euros" << endl;
    cout << "Conversion to Yen: ";
    cout << yen << " yen" << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
