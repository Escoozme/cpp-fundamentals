#include <iostream>
using namespace std;
int main()
{
    double total;
    double payments;

    cout << "Total cost of furniture: $";
    cin >> total;

    payments = total / 12;

    cout << "Twelve Payments of: $";
    cout << payments << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
