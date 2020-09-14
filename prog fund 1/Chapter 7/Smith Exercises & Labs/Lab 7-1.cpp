// Flowers.cpp - This program reads names of flowers and whether they are grown in shade or sun from an input
// file and prints the information to the user's screen.
// Input:  flowers.dat.
// Output: Names of flowers and the words sun or shade.
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ifstream fin;
    string flowerName, sunOrShade;
    // Open input file
    fin.open("flowers.dat");

    // Write while loop that reads records from file.
    while(!(fin.eof())){
        fin >> flowerName;
        fin >> sunOrShade;
        cout << flowerName << " : " << sunOrShade << endl;
    }

    fin.close();

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}


