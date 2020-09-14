#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int TWELVE = 12;
    int number;
    int x, i;
    int NUMBERS_[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int INPUTS_[100];
    int END = 999;
    bool foundIt = false;
    int numberCount = 0;

    cout << "Enter numbers:" << endl;
    cin >> number;
    while(i){
        if(number == END){
            break;
        }
        for(x = 0; x < TWELVE && foundIt == false; ++x){
            if(number == NUMBERS_[x]){
                foundIt = true;
                INPUTS_[numberCount] = number;
                ++numberCount;
            }
        }
        if(foundIt == false){
            cout << "NO. NOT THAT NUMBER." << endl;
        }
        foundIt = false;
        cin >> number;
    }

    --numberCount;
    for(x = numberCount; x >= 0; --x){
        cout << INPUTS_[x] << " ";
    }

    return 0;
}
