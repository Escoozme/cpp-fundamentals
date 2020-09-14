// This program calculates an employee's take home pay.
#include <iostream>
using namespace std;
int main()
{
   double salary;
   double stateTax;
   double federalTax;
   double numDependents;
   double dependentDeduction;
   double totalWithholding;
   double takeHomePay;

   cout << "Enter salary: $";
   cin >> salary;

   cout << "Enter number of dependents: ";
   cin >> numDependents;

   stateTax = salary * .065;
   cout << "State Tax: $" << stateTax << endl;

   federalTax = salary * .28;
   cout << "Federal Tax: $" << federalTax << endl;

   dependentDeduction = numDependents * (salary * .025);
   cout << "Dependents: $" << dependentDeduction << endl;

   totalWithholding = stateTax + federalTax;
   takeHomePay = salary - totalWithholding + dependentDeduction;

   cout << "Salary: $" << salary << endl;
   cout << "Take-Home Pay: $" << takeHomePay << endl;
   cout << "Code by Jacob Smetana" << endl;
   return 0;
}
