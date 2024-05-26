// The World Chess Championship 2022 is about to start. 14 Classical games will be played between Chef and Carlsen in the championship, where each game has one of three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 2 points, and the loser gets 0 points. If it’s a draw, both players get 1 point each. The total prize pool of the championship is 100 ⋅ X. At end of the 14 Classical games, if one player has strictly more points than the other, he is declared the champion and gets 60 ⋅ X as his prize money, and the loser gets 40 ⋅ X. If the total points are tied, then the defending champion Carlsen is declared the winner. However, if this happens, the winner gets only 55 ⋅ X, and the loser gets 45 ⋅ X. Given the results of all the 14 games, output the prize money that Carlsen receives. The results are given as a string of length 14 consisting of the characters C, N, and D.

// C denotes a victory by Carlsen.
// N denotes a victory by Chef.
// D denotes a draw.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int prizePoolMoney;

        cout<<"Enter the prize pool money : ";
        cin>>prizePoolMoney;

        string classicalGameHistory;
        cout<<"Enter the classical game history : ";
        cin>>classicalGameHistory;

        int noOfTimeCarlsenWin = 0,noOfTimeChefWin = 0,noOfTimeMatchDraw = 0;

        for(int i = 0;i < classicalGameHistory.length();i++){
            if(classicalGameHistory[i] == 'C') noOfTimeCarlsenWin++;

            else if(classicalGameHistory[i] == 'D') noOfTimeMatchDraw++;

            else noOfTimeChefWin++;
        }

        int scoreMadeByCarlsen = (2 * noOfTimeCarlsenWin) + (1 * noOfTimeMatchDraw);

        int scoreMadeByChef = (2 * noOfTimeChefWin) + (1 * noOfTimeMatchDraw);

        if(scoreMadeByCarlsen == scoreMadeByChef) cout<<"The prize money that Carlsen receives will be : "<<(55 * prizePoolMoney)<<endl;

        else if(scoreMadeByCarlsen > scoreMadeByChef) cout<<"The prize money that Carlsen receives will be : "<<(60 * prizePoolMoney)<<endl;

        else cout<<"The prize money that Carlsen receives will be : "<<(40 * prizePoolMoney)<<endl;
    }
}