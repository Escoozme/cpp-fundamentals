#include <iostream>
#include <string>
using namespace std;
int main(){
    string apples[] = {"Gala", "Rome", "Fuji", "Delicious"};
    bool foundIt = false;
    int i;
    const int MAX_APPLES = 4;
    string inApple;

    cout << "Enter apple type: ";
    cin >> inApple;
    for(i = 0; i < MAX_APPLES; i++){
        if(inApple == apples[i]){
            foundIt = true;
        }
    }
    cout << foundIt;

    return 0;
}
