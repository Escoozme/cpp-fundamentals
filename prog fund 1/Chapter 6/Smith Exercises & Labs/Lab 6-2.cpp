#include <iostream>
#include <string>
using namespace std;
int main(){
    const int NUM_CITIES = 10;
    string inCity;	       // name of city to look up in array
    string citiesInMichigan[] = {"Acme", "Albion", "Detroit", "Watervliet", "Coloma",
                                 "Saginaw", "Richland", "Glenn", "Midland", "Brooklyn"};
    string validCity = "That IS a city in Michigan!";
    string invalidCity = "Not a city in Michigan.";
    const string END = "ZZZ";
    bool foundIt = false;  // Flag variable
    int x;   		       // Loop control variable

    while(x){
        cout << "Enter name of city or ZZZ to end: ";
        cin >> inCity;
        cout << endl;
        if(inCity == END){
            break;
        }
        for(x = 0; x < NUM_CITIES; ++x){
            if(inCity == citiesInMichigan[x]){
                foundIt = true;
            }
        }
        if(foundIt == false){
            cout << invalidCity << endl << endl << endl;
        }
        else{
            cout << validCity << endl << endl << endl;
        }
        foundIt = false;
    }

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}


