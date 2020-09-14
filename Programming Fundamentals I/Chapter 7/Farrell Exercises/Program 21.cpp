#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){
    ifstream data_in;
    ofstream data_out;
    string title, firstName, lastName;
    string streetAddress[2];
    string city, state, zipCode;
    int numBoxes;
    int counter;

    data_in.open("VernonHillsMailOrderBoxes.dat");
    data_out.open("CustomerMailingLabels.dat");

    while(!(data_in.eof())){
        data_in >> title;
        data_in >> firstName;
        data_in >> lastName;
        data_in >> streetAddress[0];
        data_in >> streetAddress[1];
        data_in >> city;
        data_in >> state;
        data_in >> zipCode;
        data_in >> numBoxes;
        counter = 0;
        while(counter < numBoxes){
            ++counter;
            data_out << title << " " << firstName << " " << lastName << endl;
            data_out << streetAddress[0] << " " << streetAddress[1] << endl;
            data_out << city << " " << state << " " << zipCode << endl;
            data_out << "Box " << counter << " of " << numBoxes << endl << endl;
        }
    }

    data_in.close();
    data_out.close();

    cout << "Code by Jacob Smetana" << endl;
    return 0;
}
