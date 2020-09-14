#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;

    cout << "Enter any amount of numbers to add together and 0 to end: " << endl;
    cin >> number;

    while(number != 0)
    {
        sum += number;
        cin >> number;
    }

    cout << endl << "Sum of numbers entered = " << sum << endl;
    cout << endl << "Code by Jacob Smetana" << endl;

    return 0;
}
