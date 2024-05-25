// Chef is playing badminton today. The service rules of this singles game of badminton are as follows:

// 1.  The player who starts the game serves from the right side of their court.
// 2.  Whenever a player wins a point, they serve next.
// 3.  If the server has won an even number of points during a game, then they will serve from the right side of the service court for the subsequent point.

// Chef will be the player who begins the game. Given the number of points P obtained by Chef at the end of the game, please determine how many times Chef served from the right side of the court.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int pointsEarned;
        cout<<"Enter the no. of points earned : ";
        cin>>pointsEarned;
        cout<<"No. of times Chef served from the right side of the court will be : "<<(pointsEarned / 2) + 1<<endl;
    }
}