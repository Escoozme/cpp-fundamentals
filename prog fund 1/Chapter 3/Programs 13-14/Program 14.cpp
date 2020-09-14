#include <iostream>
using namespace std;
int main()
{
    string wrappingPaper, wrapGifts, specialDay;

    cout << "Alright good you have a gift." << endl << endl;
    cout << "Do you have wrapping paper?: ";
    cin >> wrappingPaper;
    cout << endl;
    while(wrappingPaper != "Yes")
    {
        cout << "Well, go find some already." << endl << endl << endl;
        cout << "Do you have wrapping paper now?: ";
        cin >> wrappingPaper;
        cout << endl;
    }

    cout << endl << "Alrighty. Do you know how to wrap gifts?: ";
    cin >> wrapGifts;
    cout << endl;
    if(wrapGifts == "Yes")
    {
        cout << "Then wrap the gift dammit." << endl << endl;
    }
    else
    {
        cout << "Ignore the paper. Stuff that gift into a gift bag instead." << endl << endl << endl;
    }

    if(wrapGifts != "Yes")
    {
        cout << "Now stuff some special tissue paper into said gift bag." << endl << endl;
    }
    cout << endl << "And now apply the name tag." << endl << endl << endl;
    cout << "Has the special day arrived? ";
    cin >> specialDay;
    cout << endl;
    while(specialDay != "Yes")
    {
        cout << "Hide the gift in the closet" << endl << endl << endl;
        cout << "Has the special day arrived now? ";
        cin >> specialDay;
        cout << endl;
    }
    cout << "Give the gift to whomever" << endl << endl << endl;
    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
