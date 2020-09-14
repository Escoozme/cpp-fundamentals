#include <iostream>
#include <string>
using namespace std;
int main()
{
   int charge = 0.00;
   string charColor = "gold";
   string woodType = "oak";
   int numOfChars = 8;

   charge += (numOfChars - 5) * 4;

   if(charColor == "gold")
   {
       charge += 15;
   }
   if(woodType == "oak")
   {
       charge += 20;
   }

   charge += 35;

   cout << "The charge for this sign is $" << charge << endl;
   cout << endl << endl << "Code by Jacob Smetana" << endl;
   return(0);
}
