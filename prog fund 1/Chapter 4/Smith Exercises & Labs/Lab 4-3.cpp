#include <iostream>
#include <string>
using namespace std;
int main()
{
   string employeeFirstName;
   string employeeLastName;
   double numTransactions;
   double numShifts;
   double dollarValue;
   double score;
   double bonus;
   const double BONUS_1 = 50.00;
   const double BONUS_2 = 75.00;
   const double BONUS_3 = 100.00;
   const double BONUS_4 = 200.00;

   cout << "Enter employee's first name: ";
   cin >> employeeFirstName;
   cout << "Enter employee's last name: ";
   cin >> employeeLastName;
   cout << "Enter number of shifts: ";
   cin >> numShifts;
   cout << "Enter number of transactions: ";
   cin >> numTransactions;
   cout << "Enter dollar value of transactions: ";
   cin >> dollarValue;

   score = (dollarValue / numTransactions) / numShifts;

   if(score <= 30)
   {
       bonus = BONUS_1;
   }
   else if(score >= 31 && score <= 69)
   {
       bonus = BONUS_2;
   }
   else if(score >= 70 && score <= 199)
   {
       bonus = BONUS_3;
   }
   else
   {
       bonus = BONUS_4;
   }
   cout << endl << "Employee Name: " << employeeFirstName << " " << employeeLastName << endl;
   cout << "Employee Bonus: $" << bonus << endl << endl;
   cout << "Code by Jacob Smetana" << endl;
   return 0;
}
