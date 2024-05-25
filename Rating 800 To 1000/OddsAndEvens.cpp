// Alice and Bob play the classic game of odds and evens. In this game, each of the two players choose a number between 1 and 5 without revealing to their opponent. Both of the players then simultaneously reveal their number by holding up that many fingers of their hand. Then the winner is decided based upon whether the sum of numbers played by both the players is odd or even. In this game we assume that if the sum is odd then Alice wins, otherwise Bob wins. If Alice held up a fingers and Bob held up b fingers, determine who won the game.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int fingersRaisedByAlice,fingersRaisedByBob;
        cout<<"Enter the no. of fingers raised by Alice : ";
        cin>>fingersRaisedByAlice;
        cout<<"Enter the no. of fingers raised by Bob : ";
        cin>>fingersRaisedByBob;
        if((fingersRaisedByAlice + fingersRaisedByBob) % 2 == 0) cout<<"Bob wins the game"<<endl;
        else cout<<"Alice wins the game"<<endl;
    }
}