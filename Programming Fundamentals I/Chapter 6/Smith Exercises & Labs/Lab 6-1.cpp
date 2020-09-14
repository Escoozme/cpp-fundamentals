#include <iostream>
#include <string>
using namespace std;

int main(){
    const int SIZE = 8;
    double averages[SIZE];
    int loopIndex;
    double battingAverage;
    double min, max;
    double total, average;

    for(loopIndex = 0; loopIndex < SIZE; ++loopIndex){
        cout << "Enter a batting average: ";
        cin >> battingAverage;
        averages[loopIndex] = battingAverage;
    }

    min = averages[0];
    max = averages[0];
    total = averages[0];
    for(loopIndex = 1; loopIndex < SIZE; ++loopIndex){
        if(min > averages[loopIndex]){
            min = averages[loopIndex];
        }
        if(max < averages[loopIndex]){
            max = averages[loopIndex];
        }
        total = total + averages[loopIndex];
    }

    average = total / SIZE;
    cout << endl;
    cout << "Batting averages given: ";
    for(loopIndex = 0; loopIndex < SIZE; ++loopIndex){
        if(loopIndex != 7){
            cout << averages[loopIndex] << ", ";
        }
        else{
            cout << averages[loopIndex];
        }
    }
    cout << endl << endl;
    cout << "Maximum batting average: " << max << endl;
    cout << "Minimum batting average: " << min << endl;
    cout << "Average batting average: " << average << endl;

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
