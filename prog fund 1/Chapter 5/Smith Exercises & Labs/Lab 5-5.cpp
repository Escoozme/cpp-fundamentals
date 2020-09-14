#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int NUM_ACROSS = 3;
    const int NUM_DOWN = 5;
    int row;
    int column;

    for(row = 1; row <= NUM_DOWN; ++row)
    {
        for(column = 1; column <= NUM_ACROSS; ++column)
        {
            if(row != 2 && row != 4)
            {
                cout << "*";
            }
            else
            {
                if(column == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            if(column == NUM_ACROSS)
            {
                cout << endl;
            }
        }
    }
    cout << endl;
    cout << "Code by Jacob Smetana" << endl;
    return 0;
}


