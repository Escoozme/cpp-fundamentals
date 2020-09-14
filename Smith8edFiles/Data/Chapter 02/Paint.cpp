// This calculates the number of gallons of paint needed.
#include <iostream>
using namespace std;
int main()
{
   double height1 = 9;
   double width1 = 19.5;
   double width2 = 20.0;
   double squareFeet;
   double numGallons;

   squareFeet = (width1 * height1 + width2 * height1) * 2;
   numGallons = squareFeet / 150;

   cout << "Number of Gallons: " << numGallons << endl;
   return 0;
}
