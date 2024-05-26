// Chef Two and Chef Ten are playing a game with a number X. In one turn, they can multiply X by 2. The goal of the game is to make X divisible by 10. Help the Chefs find the smallest number of turns necessary to win the game (it may be possible to win in zero turns) or determine that it is impossible.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number;
        cout<<"Enter a number : ";
        cin>>number;

        int lastDigit = (number % 10);

        if(lastDigit == 0) cout<<"The smallest number of turns necessary to win the game will be : 0"<<endl;

        else if(lastDigit == 5) cout<<"The smallest number of turns necessary to win the game will be : 1"<<endl;

        else cout<<"It is impossible"<<endl;
    }
}