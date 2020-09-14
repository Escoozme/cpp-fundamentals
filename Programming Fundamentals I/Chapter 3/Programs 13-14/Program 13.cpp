#include <iostream>
#include <string>
using namespace std;
int main()
{
    string yourClass, homework, dueDate;
    string YES = "YES";

    cout << "Do you have a class?: ";
    cin >> yourClass;
    cout << endl;

    yourClass[0] = toupper(yourClass[0]);
    yourClass[1] = toupper(yourClass[1]);
    yourClass[2] = toupper(yourClass[2]);

    if(yourClass == YES)
    {
        cout << "Check class schedule" << endl << endl;
        cout << "Is homework due?: ";
        cin >> homework;
        cout << endl;
            while(homework == YES)
            {
                cout << "Is due date near?: ";
                cin >> dueDate;
                    if(dueDate == YES)
                    {
                        cout << "...do your homework" << endl << endl;
                    }
                    else
                    {
                        cout << "DON'T DO IT" << endl << endl;
                    }
                cout << "Is homework still due?: ";
                cin >> homework;
                cout << endl;
            }
    }
    cout << "Go play some video games" << endl << endl;
    cout << endl << "Code by Jacob Smetana" << endl;

    return 0;
}
