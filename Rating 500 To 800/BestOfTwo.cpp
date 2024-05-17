// Alice and Bob are playing a game. Each player rolls a regular six faced dice 3 times. The score of a player is the sum of the values of the highest 2 rolls. The player with the highest score wins, and the game ends in a Tie if both players have the same score. Find the winner of the game or determine whether it is a tie.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int alice1st,alice2nd,alice3rd,bob1st,bob2nd,bob3rd;
        cout<<"Enter the score by alice in first roll of dice : ";
        cin>>alice1st;
        cout<<"Enter the score by alice in second roll of dice : ";
        cin>>alice2nd;
        cout<<"Enter the score by alice in third roll of dice : ";
        cin>>alice3rd;
        cout<<"Enter the score by  bob in first roll of dice : ";
        cin>>bob1st;
        cout<<"Enter the score by bob in second roll of dice : ";
        cin>>bob2nd;
        cout<<"Enter the score by bob in third roll of dice : ";
        cin>>bob3rd;
        int minScoreAlice = min(alice1st,min(alice2nd,alice3rd));
        int minScoreBob = min(bob1st,min(bob2nd,bob3rd));
        int scoreByAlice = (alice1st + alice2nd + alice3rd) - minScoreAlice;
        int scoreByBob = (bob1st + bob2nd + bob3rd) - minScoreBob;
        if(scoreByAlice == scoreByBob) cout<<"Match gonna tie"<<endl;
        else if(scoreByAlice > scoreByBob) cout<<"Alice won the match"<<endl;
        else cout<<"Bob won the match"<<endl;
    }
}