#include <iostream>
using namespace std;
int main()
{
    double Length;
    double Width;
    double SquareFootage;

    cout << "Enter length of floor in feet: ";
    cin >> Length;
    cout << "Enter width of floor in feet: ";
    cin >> Width;

    SquareFootage = Length * Width;

    cout << endl;
    cout << "Length of floor: ";
    cout << Length << " ft" << endl;
    cout << "Width of floor: ";
    cout << Width << " ft" << endl;
    cout << "Area of floor: ";
    cout << SquareFootage << " square ft";
    cout << endl << endl;

    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
