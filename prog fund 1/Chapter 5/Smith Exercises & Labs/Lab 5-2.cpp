#include <iostream>
#include <string>
using namespace std;

int main()
{
    double numStars = 0;
    double averageStars;
    double totalStars = 0;
    int numPatrons = 0;

    while(numStars >= 0)
    {
        ++numPatrons;
        cout << "Enter rating for featured movie: ";
        cin >> numStars;
        totalStars += numStars;
    }

    averageStars = (totalStars - numStars) / (numPatrons - 1);

    cout << endl << "Average Star Value: " << averageStars << endl << endl;
    cout << endl << "Code By Jacob Smetana"<< endl;
    return 0;
}

