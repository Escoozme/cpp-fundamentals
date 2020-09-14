#include <iostream>
#include <string>
using namespace std;
int main()
{
   string passengerFirstName = "";
   string passengerLastName = "";
   int passengerAge = 0;
   const string EXIT = "ZZZ";

   cout << "Enter ZZZ for first and last name to end." << endl << endl;
   cout << "Enter passenger's first name: ";
   cin >> passengerFirstName;
   cout << "Enter passenger's last name: ";
   cin >> passengerLastName;

   while(passengerFirstName != EXIT && passengerLastName != EXIT)
   {
       cout << "Enter passenger's age: ";
       cin >> passengerAge;
       cout << endl;
       if(passengerAge > 6 && passengerAge < 65)
       {
           cout << passengerFirstName << " " << passengerLastName <<
                " is not eligible for a discount." << endl << endl;
       }
       else
       {
           cout << passengerFirstName << " " << passengerLastName <<
                " is eligible for a discount." << endl << endl;
       }
       cout << endl << "Enter passenger's first name: ";
       cin >> passengerFirstName;
       cout << "Enter passenger's last name: ";
       cin >> passengerLastName;
   }

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}

