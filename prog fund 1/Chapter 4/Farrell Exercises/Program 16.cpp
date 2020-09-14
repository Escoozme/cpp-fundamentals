#include <iostream>
using namespace std;
int main()
{
    double firstNum;
    double secondNum;
    double thirdNum;
    double END = 0;

    cout << "Input " << END << " for all three to end." << endl << endl;
    cout << "Input first number: ";
    cin >> firstNum;
    cout << "Input second number: ";
    cin >> secondNum;
    cout << "Input third number: ";
    cin >> thirdNum;
    cout << endl;

    while(firstNum != END || secondNum != END || thirdNum != END)
    {
        if(firstNum + secondNum == thirdNum)
        {
            cout << "The first and second equal the third." << endl;
        }
        else
        {
            if(firstNum + thirdNum == secondNum)
            {
                cout << "The first and third equal the second." << endl;
            }
            else
            {
                if(secondNum + thirdNum == firstNum)
                {
                    cout << "The second and third equal the first." << endl;
                }
                else
                {
                    cout << "No two numbers equal the third" << endl;
                }
            }
        }
        cout << endl << endl;
        cout << "Input first number: ";
        cin >> firstNum;
        cout << "Input second number: ";
        cin >> secondNum;
        cout << "Input third number: ";
        cin >> thirdNum;
        cout << endl;
    }
    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
