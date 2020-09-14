#include <iostream>
#include <string>
using namespace std;
int main(){
    string cities[] = {"Chicago", "Rome", "Paris", "London"};
    int populations[] = {2695598, 2760665, 2190777, 7805417};
    const int MAX_CITIES = 4;
    int foundIt;
    int i, x;
    string inCity;

    cout << "Enter city name: ";
    cin >> inCity;
    for(i = 0; i < MAX_CITIES; ++i){
        if(inCity == cities[i]){
            foundIt = i;
        }
    }
    cout << "Population for " << cities[foundIt] << " is " << populations[foundIt] << endl;


    return 0;
}
