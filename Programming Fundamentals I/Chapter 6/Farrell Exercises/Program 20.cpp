#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int CLASSES = 5;
    int CLASS_NUMBERS[] = {1, 2, 3, 4, 5};
    string CLASS_NAME[] = {"Yoga 1", "Yoga 2", "Children's Yoga", "Prenatal Yoga", "Senior Yoga"};
    int inClassNum, x;
    string chosenClass;

    cout << "To choose a class, enter any number from 1 to 5: ";
    cin >> inClassNum;
    cout << endl;

    while(inClassNum < 1 || inClassNum > 5){
        cout << "Number must be within the range given: ";
        cin >> inClassNum;
        cout << endl;
    }

    for(x = 0; x < CLASSES; ++x){
        if(inClassNum == CLASS_NUMBERS[x]){
            chosenClass = CLASS_NAME[x];
            break;
        }
    }

    cout << "Class " << inClassNum << ": " << chosenClass << endl;

    return 0;
}
