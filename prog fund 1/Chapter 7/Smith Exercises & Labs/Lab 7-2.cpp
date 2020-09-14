#include <iostream>
#include <string>
using namespace std;
int main(){
    const string HEAD1 = "WEEKLY HOURS WORKED";
    const string DAY_FOOTER = "\t\t\t\t\t\t\t\tTotal hours for ";
    const string SENTINEL = "done";		// Named constant for sentinel value.
    double hoursWorked = 0;       		// Current record hours.
    string dayOfWeek;			        // Current record day of week.
    double hoursTotal = 0;      		// Hours total for a day.
    string prevDay = ""; 		   		// Previous day of week.
    bool notDone = true;				// loop control

    cout << endl << endl;
    cout << "\t\t\t\t\t\t" << HEAD1 << endl;
    cout << endl << endl;
    // Read first record
    cout << "Enter day of week or done to quit: ";
    cin >> dayOfWeek;
    if(dayOfWeek  == SENTINEL){
        notDone = false;
    }
    else{
        cout << "Enter hours worked: ";
        cin >> hoursWorked;
        cout << endl;
        prevDay = dayOfWeek;
    }

    while(notDone == true){
        // Implement control break logic here
        if(dayOfWeek != prevDay){
            cout << DAY_FOOTER << prevDay << ": " << hoursTotal << endl;
            hoursTotal = 0;
            prevDay = dayOfWeek;
        }
        cout << "\t\t\t\t\t\t" << dayOfWeek << " " << hoursWorked << endl;
        hoursTotal += hoursWorked;
        cout << "Enter day of week or done to quit: ";
        cin >> dayOfWeek;
        if(dayOfWeek == SENTINEL){
            notDone = false;
        }
        else{
            cout << "Enter hours worked: ";
            cin >> hoursWorked;
            cout << endl;
        }
    }
    cout << DAY_FOOTER << prevDay << ": " << hoursTotal << endl;

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
