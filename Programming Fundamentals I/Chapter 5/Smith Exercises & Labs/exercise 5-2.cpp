#include <iostream>
using namespace std;
int main()
{
    int number1 = 0;
    int number2 = 0;

    while(number1 < 6)
    {
        ++number1;
        number2 += number1;
    }
    cout << number1 << endl;
    cout << number2 << endl;

    return 0;
}
