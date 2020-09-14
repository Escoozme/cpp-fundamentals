#include <iostream>
using namespace std;
int main()
{
    double MilesDriven;
    double GallonsUsed;
    double GasMileage;

    cout << "Enter miles driven this week: ";
    cin >> MilesDriven;
    cout << "Enter gallons used this week: ";
    cin >> GallonsUsed;

    GasMileage = MilesDriven / GallonsUsed;

    cout << endl;
    cout << "Miles driven: " << MilesDriven << endl;
    cout << "Gallons used: " << GallonsUsed << endl;
    cout << "Miles per gallon: " << GasMileage << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
