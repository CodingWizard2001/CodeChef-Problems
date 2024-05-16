// Chef is playing a variant of Blackjack, where 3 numbers are drawn and each number lies between 1 and 10 (with both 1 and 10 inclusive). Chef wins the game when the sum of these 3 numbers is exactly 21. Given the first two numbers A and B, that have been drawn by Chef, what should be 3-rd number that should be drawn by the Chef in order to win the game? Note that it is possible that Chef cannot win the game, no matter what is the 3-rd number. In such cases, report -1 as the answer.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int pickNumber1,pickNumber2;
        cout<<"Enter the first number is picked : ";
        cin>>pickNumber1;
        cout<<"Enter the second number is picked : ";
        cin>>pickNumber2;
        int restNumber = 21 - (pickNumber1 + pickNumber2);
        if(restNumber > 10) cout<<"There 3rd number required : "<<-1<<endl;
        else cout<<"There 3rd number required : "<<restNumber<<endl;
    }
}