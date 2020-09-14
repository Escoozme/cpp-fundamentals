#include <iostream>
using namespace std;
int main() {
   int testScore;
   int classRank;

   cout << "Enter student's test score: ";
   cin >> testScore;
   cout << "Enter student's class rank: ";
   cin >> classRank;
   cout << endl;

   if(testScore >= 90) {
        if(classRank >= 25) {
            cout << "Accept" << endl;
        }
        else
            cout << "Reject" << endl;
   }
   else {
        if(testScore >= 80) {
            if(classRank >= 50)
                cout << "Accept" << endl;
            else
                cout << "Reject" << endl;
        }
        else {
            if(testScore >= 70) {
                if(classRank >=75)
                    cout << "Accept" << endl;
                else
                    cout << "Reject" << endl;
            }
            else
                cout << "Reject" << endl;
        }
   }
   cout << endl << endl;
   cout << "Code by Jacob Smetana" << endl;

   return 0;
}
