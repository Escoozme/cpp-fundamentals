#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    const int MAX_ROWS = 5, MAX_COLS = 7;
    int rows, columns;

    for(rows = 0; rows < MAX_ROWS; ++rows)
    {
        for(columns = 0; columns < MAX_COLS; ++columns)
        {
            sum += rows + columns;
        }
    }
    cout << "Value of sum is " << sum << endl;
    cout << rows << endl;
    cout << columns << endl;

    return 0;
}
