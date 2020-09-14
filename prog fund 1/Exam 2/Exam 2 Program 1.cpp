#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{   int number;
    int guess;
    int counter = 1;
    string wrongHigh = "Guess lower. Try again. : ";
    string wrongLow = "Guess higher. Try again. : ";
    string quitBeingWrong = "Come on now...";
    string quitBeingVeryWrong = "Jesus Christ... what are you doing...";
    string Roberto = "Fifty-six... FIFTY-SIX!? Ah man, now that's all I can think about!";
    // Random number generator from Lab 5-7
    srand((unsigned)time(NULL));
    number = (rand() % 1000) + 1;

    cout << "Guess a number between 1 and 1000: ";
    cin >> guess;
    cout << endl;
    while(guess != number && guess != 56)
    {
        if(counter == 5 || counter == 10)
        {
            cout << quitBeingWrong << endl;
        }
        else if(counter == 20 || counter == 30)
        {
            cout << quitBeingVeryWrong << endl;
        }
        if(guess > number)
        {
            cout << wrongHigh;
        }
        else
        {
            cout << wrongLow;
        }
        cin >> guess;
        cout << endl;
        ++counter;
    }
    if(guess == 56)
    {
        cout << Roberto << endl;
    }
    else
    {
        cout << "That is the correct answer. Goodbye." << endl;
    }
    cout << endl << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
