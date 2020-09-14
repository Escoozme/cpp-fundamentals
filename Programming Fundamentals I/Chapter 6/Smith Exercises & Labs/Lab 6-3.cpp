// JumpinJava.cpp - This program looks up and prints the names and prices of coffee orders.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string addIn;               // Add-in ordered
    const int NUM_ITEMS = 5;
    string addIns[] = {"Cream", "Cinnamon", "Chocolate", "Amaretto", "Whiskey"};
    double addInPrices[] = {.89, .25, .59, 1.50, 1.75};
    bool foundIt = false;       // Flag variable
    int x;   		            // Loop control variable
    double orderTotal = 2.00;   // All orders start with a 2.00 charge
    string sorryBro = "Sorry, we do not carry that.";
    string END = "XXX";

    while(x){
        cout << "Enter coffee add-in or " << END << " to quit: ";
        cin >> addIn;
        if(addIn == END){
            break;
        }
        for(x = 0; x < NUM_ITEMS && foundIt == false; ++x){
            if(addIn == addIns[x]){
                foundIt = true;
            }
        }
        if(foundIt == true){
            --x;
            cout << addIns[x] << ": $" << addInPrices[x] << endl;
        }
        else{
            cout << sorryBro << endl;
        }
        orderTotal = orderTotal + addInPrices[x];
        cout << endl << "Total cost of order: $" << orderTotal << endl << endl << endl;

        ++x;
        foundIt = false;
        orderTotal = 2.00;
    }

    cout << endl;
    cout << "Code by Jacob Smetana" << endl;
    return 0;
}


