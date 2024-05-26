// It's the soccer match finals in Chefland and as always it has reached the penalty shootouts. Each team is given 5 shots to make and the team scoring a goal on the maximum number of shots wins the game. If both the teams' scores are equal, then the game is considered a draw and we would have 2 champions. Given ten integers A1,A2,…,A10, where the odd indexed integers(A1,A3,A5,A7,A9) represent the outcome of the shots made by team 1 and even indexed integers(A2,A4,A6,A8,A10) represent the outcome of the shots made by team 2 (here Ai = 1 indicates that it's a goal and Ai = 0 indicates a miss), determine the winner or find if the game ends in a draw.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int goalScore[10];
        int goalScoreByTeam1 = 0,goalScoreByTeam2 = 0;
        for(int i = 1;i <= 10;i++){
            if(i % 2 != 0){
                cout<<"Enter the penalty shoot by Team 1 : ";
                cin>>goalScore[i];
            }
            else{
                cout<<"Enter the penalty shoot by Team 2 : ";
                cin>>goalScore[i];
            }
        }
        for(int i = 1;i <= 10;i++){
            if(i % 2 != 0 && goalScore[i] == 1) goalScoreByTeam1++;
            else if(i % 2 == 0 && goalScore[i] == 1) goalScoreByTeam2++;
        }
        if(goalScoreByTeam1 == goalScoreByTeam2) cout<<"Both team's penalty shoot out same score"<<endl;
        else if(goalScoreByTeam1 > goalScoreByTeam2) cout<<"Team 1 wins in penalty shoot out score"<<endl;
        else cout<<"Team 2 wins in penalty shoot out score"<<endl;
    }
}