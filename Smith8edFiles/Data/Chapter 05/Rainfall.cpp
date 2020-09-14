#include <iostream>
#include <string>
using namespace std;
int main()
{
   double rainfall;	// Daily rainfall amount
   double sum = 0; 	// Accumulates sum of seven rainfall amounts
   double average; 	// Average of seven rainfall amounts
   int counter; 		// Loop control variable
   const int DAYS_IN_WEEK = 7;

   for(counter = 1; counter <= DAYS_IN_WEEK; counter++)
   {
      cout << "Enter rainfall amount for Day " << counter << ": ";
      cin >> rainfall;
      cout << "Day " << counter << " rainfall amount is " <<
              rainfall << " inches" << endl;
      sum = sum + rainfall;
   }

   average = sum / counter;

   cout << "Average Rainfall amount is " << average << endl;
   return 0;
}


