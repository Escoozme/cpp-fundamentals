#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;

    cout << "Enter number: ";
    cin >> number;
    cout << endl;

    for(int counter = 1; counter <= number; ++counter)
    {
        sum += counter;
    }

    cout << "Sum of every number from 1 to " << number
         << " is: " << sum << endl << endl << endl;

    cout << "Code by Jacob Smetana" << endl;
    return 0;
}
