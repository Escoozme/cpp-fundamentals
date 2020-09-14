#include <iostream>
bool validateDate(int, int, int);
using namespace std;
int main()
{
  int year;
  int month;
  int day;
  const int MIN_YEAR = 0, MIN_MONTH = 1, MAX_MONTH = 12, MIN_DAY = 1, MAX_DAY = 31;
  bool validDate = true;

  cout << "Enter month: ";
  cin >> month;
  cout << "Enter day: ";
  cin >> day;
  cout << "Enter year: ";
  cin >> year;
  cout << endl;

  // Check to be sure date is valid
  if(year <= MIN_YEAR)  // invalid year
     validDate = false;
  else if (month < MIN_MONTH || month > MAX_MONTH)  // invalid month
     validDate = false;
  else if (day < MIN_DAY || day > MAX_DAY) // invalid day
     validDate = false;

  // test to see if date is valid and output date and whether it is valid or not
  if(validDate == true)
  {
     cout << month << "/" << day << "/" << year << " is a valid date." << endl;
  }
  else
  {
     cout << month << "/" << day << "/" << year << " is an invalid date." << endl;
  }

  cout << endl << endl;
  cout << "Code by Jacob Smetana" << endl;
  return 0;
}
