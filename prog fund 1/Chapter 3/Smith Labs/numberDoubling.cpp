#include <iostream>
using namespace std;
int main()
{
    int originalNumber;
    int calculatedAnswer;

    cout << "Enter number to double or 0 to end: ";
    cin >> originalNumber;
    cout << endl;

    while(originalNumber != 0)
    {
        calculatedAnswer = originalNumber * 2;

        cout << originalNumber << " doubled is " << calculatedAnswer << endl << endl;

        cout << "Enter number to double or 0 to end: ";
        cin >> originalNumber;
        cout << endl;
    }

    cout << endl << "Code by Jacob Smetana" << endl << endl;

    return 0;
}
