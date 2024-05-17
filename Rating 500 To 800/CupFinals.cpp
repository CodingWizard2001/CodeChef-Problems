// It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to D. Given that the skills of the teams competing in the final are X and Y respectively, determine whether Chef will find the game interesting or not.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int scoreOfTeam1,scoreOfTeam2,skill;
        cout<<"Enter the score of 1st team : ";
        cin>>scoreOfTeam1;
        cout<<"Enter the score of 2nd team : ";
        cin>>scoreOfTeam2;
        cout<<"Enter skill chef want : ";
        cin>>skill;
        if(abs(scoreOfTeam1 - scoreOfTeam2) > skill) cout<<"The game is interesting"<<endl;
        else cout<<"The game is not interesting"<<endl;
    }
}