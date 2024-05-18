// Chef is playing Ludo. According to the rules of Ludo, a player can enter a new token into the play only when he rolls a 6 on the die. In the current turn, Chef rolled the number X on the die. Determine if Chef can enter a new token into the play in the current turn or not.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int diceRoll;
        cout<<"Enter the value of dice roll : ";
        cin>>diceRoll;
        if(diceRoll == 6) cout<<"Chef can enter a new token into the play"<<endl;
        else cout<<"Chef can't enter a new token into the play"<<endl;
    }
}