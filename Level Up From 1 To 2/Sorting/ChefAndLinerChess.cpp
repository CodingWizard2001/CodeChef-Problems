// Chef wants to play a game of linear chess on a one-dimensional board ― an infinite row of squares numbered by positive integers. In this game, he has a pawn, which is initially at a square K. There are also N other people (numbered 1 through N); Chef can choose one of them to play against. For each valid i, the i-th player would play in the following way: 

// 1.  Take a pawn and place it on a square Pi.
// 2.  Repeat the following move any number of times: move the pawn from its current square Pi squares forward, i.e. from a square s, this player's pawn is moved to the square  s + Pi.
// 3.  If this player moves their pawn to the square with Chef's pawn, then Chef's pawn is captured and he loses the game.

// Unfortunately, Chef cannot move his pawn during the game, making him an easy target for other players. Given the starting positions of all N + 1 players, find a player who can capture Chef's pawn in the smallest number of moves or determine that no player can capture his pawn.



#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPlayers,chefPosition,change,result = 0;
        cout<<"Enter the no. of players : ";
        cin>>noOfPlayers;

        cout<<"Enter the position of Chef : ";
        cin>>chefPosition;

        long long int mini = INT_MAX;
        long long int arr[noOfPlayers];
        for(int i = 0;i < noOfPlayers;i++){
            cout<<"Enter the position of "<<(i + 1)<<"th player : ";
            cin>>arr[i];
        }

        for(int i = 0;i < noOfPlayers;i++){
            if(chefPosition % arr[i] == 0){
                change = chefPosition - arr[i];
                if(mini > change / arr[i]){
                    mini = change / arr[i];
                    result = arr[i];
                }
            }
        }

        (result == 0) ? cout<<"No player can capture his pawn will be : -1"<<endl : cout<<"No player can capture his pawn will be : "<<result<<endl;
    }
}