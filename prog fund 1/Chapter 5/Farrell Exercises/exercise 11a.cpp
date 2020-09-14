#include <iostream>
using namespace std;
int main()
{
    int tuition = 15000;
    double rate;
    int counter;

    cin >> rate;

    for(counter = 1; counter <= 10; ++counter)
    {
        cout << "Year " << counter << " tuition: $" << tuition;
        tuition = tuition + (tuition * rate);
        cout << endl << endl;
    }
    return 0;
}
