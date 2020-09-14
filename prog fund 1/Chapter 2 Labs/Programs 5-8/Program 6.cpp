#include <iostream>
using namespace std;
int main()
{
    double people;
    double slices;

    cout << "Party People: ";
    cin >> people;

    slices = 8 / people;

    cout << "Slices per person: ";
    cout << slices << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
