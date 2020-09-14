#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int CLASSES = 5;
    int CLASS_NUMBERS[] = {1, 2, 3, 4, 5};
    string CLASS_NAME[] = {"Yoga 1", "Yoga 2", "Children's Yoga", "Prenatal Yoga", "Senior Yoga"};
    int INPUTS[100];
    int inClassNum, x, i;
    int END = 999;
    bool foundIt = false;
    int numberCount = 0;
    int requests = 0;

    for(x = 0; x < CLASSES; ++x){
        cout << CLASS_NUMBERS[x] << ": " << CLASS_NAME[x] << endl;
    }
    cout << endl;
    cout << "Input " << END << " to end program." << endl << endl;

    cout << "Choose your classes. Enter corresponding numbers from 1 to 5:" << endl;
    cin >> inClassNum;
    while(i){
        if(inClassNum == END){
            break;
        }
        for(x = 0; x < CLASSES && foundIt == false; ++x){
            if(inClassNum == CLASS_NUMBERS[x]){
                foundIt = true;
                INPUTS[numberCount] = inClassNum;
                ++numberCount;
            }
        }
        if(foundIt == false){
            cout << "Numbers must be within the range given..." << endl;
        }
        foundIt = false;
        cin >> inClassNum;
    }

    --numberCount;
    cout << endl;
    for(x = 0; x < CLASSES; ++x){
        for(i = 0; i <= numberCount; ++i){
            if(CLASS_NUMBERS[x] == INPUTS[i]){
                ++requests;
            }
        }
        if(requests > 0){
            cout << "Class " << CLASS_NUMBERS[x] << ": " << CLASS_NAME[x] << ", " << requests << " request(s)" << endl;
        }
        requests = 0;
    }
    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
