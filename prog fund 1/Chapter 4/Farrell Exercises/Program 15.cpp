#include <iostream>
using namespace std;
int main()
{
    double firstNum;
    double secondNum;
    double END = 0;

    cout << "Input " << END << " for both to end." << endl << endl;
    cout << "Input first number: ";
    cin >> firstNum;
    cout << "Input second number: ";
    cin >> secondNum;
    cout << endl;

    while(firstNum != END || secondNum != END)
    {
        if(firstNum > secondNum)
        {
            cout << "First is larger" << endl << endl;
        }
        else
        {
            if(firstNum < secondNum)
            {
                cout << "Second is larger" << endl << endl;
            }
            else
            {
                cout << "Numbers are equal" << endl << endl;
            }
        }
        cout << endl;
        cout << "Input first number: ";
        cin >> firstNum;
        cout << "Input second number: ";
        cin >> secondNum;
        cout << endl;
    }
    cout << "Numbers are equal" << endl << endl;
    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
