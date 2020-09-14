#include <iostream>
using namespace std;
int main()
{
    double width;
    double length;
    double area;

    cout << "Enter width in feet: ";
    cin >> width;
    cout << "Enter length in feet: ";
    cin >> length;

    area = width * length;

    cout << endl;
    cout << "Area of floor: ";
    cout << area << " square feet" << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
