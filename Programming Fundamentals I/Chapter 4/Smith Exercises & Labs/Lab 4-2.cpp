#include <iostream>
using namespace std;
int main()
{
   int num1 = 53;
   int num2 = -50;
   int num3 = 78;
   int largest = num1;
   int smallest = num1;

   if(num2 > largest)
   {
       largest = num2;
   }
   if(num3 > largest)
   {
       largest = num3;
   }
   if(num2 < smallest)
   {
       smallest = num2;
   }
   if(num3 < smallest)
   {
       smallest = num3;
   }

   cout << "The largest value is " << largest << endl;
   cout << "The smallest value is " << smallest << endl;
   cout << endl << "Code by Jacob Smetana" << endl;
   return 0;
}
