#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
 {
   ifstream data_in;
   ofstream data_out;
   string dvdName, dvdPrice, dvdShelf;

   data_in.open("inputFile.dat");
   data_out.open("outputFile.dat");

   data_in >> dvdName;
   data_in >> dvdPrice;
   data_in >> dvdShelf;

   data_out << dvdName << endl;
   data_out << dvdPrice << endl;
   data_out << dvdShelf << endl;

   data_in.close();
   data_out.close();
   return 0;
} // End of main function
