#include <iostream>
using namespace std;
int main()
{
    double money;
    double spent;
    double profit;

    cout << "Money earned: $";
    cin >> money;

    cout << "Business costs: $";
    cin >> spent;

    profit = money - spent;

    cout << "Profit: $";
    cout << profit << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
