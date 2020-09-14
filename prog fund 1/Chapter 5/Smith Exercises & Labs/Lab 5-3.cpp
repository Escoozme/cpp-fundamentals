#include <iostream>
#include <string>
using namespace std;
int main()
{

    string head1 = "Number: ";
    string head2 = "Multiplied by 2: ";
    string head3 = "Multiplied by 10: ";
    int numberCounter;
    int byTen;
    int byTwo;
    const int NUM_LOOPS = 10;

    cout << "0 through 10 multiplied by 2 and by 10." << endl << endl;

    for(numberCounter = 0; numberCounter <= NUM_LOOPS; ++numberCounter)
    {
        byTwo = numberCounter * 2;
        byTen = numberCounter * 10;
        cout << head1 << numberCounter << endl;
        cout << head2 << byTwo << endl;
        cout << head3 << byTen << endl << endl;
    }

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
