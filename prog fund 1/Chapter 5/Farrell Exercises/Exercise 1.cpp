#include <iostream>
using namespace std;
int main()
{
    int p = 2;
    int q = 4;

    while(p < q)
    {
        cout << "Adios" << endl;
        int r = 1;
        while(r < q)
        {
            cout << "Adios" << endl;
            r = r + 1;
        }
        p = p + 1;
    }

    return 0;
}
