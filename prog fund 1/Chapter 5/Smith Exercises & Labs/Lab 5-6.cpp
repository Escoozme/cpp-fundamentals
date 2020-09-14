// Input:  L for left-handed; R for right handed; X to quit.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string leftOrRight = "";
    int rightTotal = 0;
    int leftTotal = 0;

    cout << "Enter an L if you are left-handed,";
    cout << " an R if you are right-handed or X to quit: " << endl;
    cin >> leftOrRight;

    while(leftOrRight == "R" || leftOrRight == "L")
    {
        if(leftOrRight == "R")
        {
            rightTotal++;
        }
        else
        {
            leftTotal++;
        }
        cin >> leftOrRight;
    }

    cout << endl << "Number of left-handed students: " << leftTotal << endl;
    cout << "Number of right-handed students: " << rightTotal << endl;
    cout << endl << "Code by Jacob Smetana" << endl;

    return 0;
}



