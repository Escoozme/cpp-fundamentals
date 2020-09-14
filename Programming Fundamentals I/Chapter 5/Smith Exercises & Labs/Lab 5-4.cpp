#include <iostream>
#include <string>
using namespace std;
int main()
{

    string head1 = "Number: ";
    string head2 = "Multiplied by 2: ";
    string head3 = "Multiplied by 10: ";
    int numberCounter = 0;
    int byTen;
    int byTwo;
    const int NUM_LOOPS = 10;

    cout << "0 through 10 multiplied by 2 and by 10." << endl << endl;

    do
    {
        byTwo = numberCounter * 2;
        byTen = numberCounter * 10;
        cout << head1 << numberCounter << endl;
        cout << head2 << byTwo << endl;
        cout << head3 << byTen << endl << endl;
        ++numberCounter;
    }
    while(numberCounter <= NUM_LOOPS);

    cout << "Code by Jacob Smetana" << endl;
    return 0;
}
