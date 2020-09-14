#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int number; 	    // Number to be guessed
    int userNumber;	    // User's guess
    string keepGoing;   // Contains a "Y" or "N" determining if the user wants to continue

    srand((unsigned)time(NULL));
    number = (rand() % 10) + 1;     // Generate random number

    cout << "Do you want to guess a number? Enter Y or N: ";
    cin >> keepGoing;
    cout << endl;
    //Validate input
    while(keepGoing != "Y" && keepGoing != "N")
    {
        cout << "Invalid response. Please enter Y or N: ";
        cin >> keepGoing;
        cout << endl;
    }

    while(keepGoing == "Y")
    {
        cout << "I'm thinking of a number. .\n Try to guess by entering a number between 1 and 10: ";
        cin >> userNumber;
        //Validate input
        while(userNumber < 1 || userNumber > 10)
        {
            cout << "Number must be between 1 and 10. Please try again: ";
            cin >> userNumber;
            cout << endl;
        }
        if(userNumber == number)
        {
            keepGoing = "N";
            cout << "You are a genius. That's correct!" << endl;
        }
        else
        {
            cout << "That's not correct. Do you want to guess again? Enter Y or N: ";
            cin >> keepGoing;
            cout << endl;
            // Validate input
            while(keepGoing != "Y" && keepGoing != "N")
            {
                cout << "Invalid response. Please enter Y or N: ";
                cin >> keepGoing;
                cout << endl;
            }
        }
    }
    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}


