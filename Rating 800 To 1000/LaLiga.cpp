// Today is the final round of La Liga, the most popular professional football league in the world. Real Madrid is playing against Malaga and Barcelona is playing against Eibar. These two matches will decide who wins the league title. Real Madrid is already 3 points ahead of Barcelona in the league standings. In fact, Real Madrid will win the league title, except for one scenario: If Real Madrid loses against Malaga, and Barcelona wins against Eibar, then the La Liga title will go to Barcelona. In any other combination of results, Real Madrid will win the title. You will be given multiple scenarios for these two games, where in each one you will be given the number of goals each team scored in their respective match. A team wins a match if it scores more than the opponent. In case they score the same number of goals, it's a draw. Otherwise, the team loses the game. You are asked to tell the winner of the La Liga title in each scenario.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string teamName;
        int goalMadeByBarcelona,goalMadeByMalaga,goalMadeByRealMadrid,goalMadeByEibar;

        for(int i = 0;i < 4;i++){
            cout<<"Enter team name : ";
            cin>>teamName;

            if(teamName == "Barcelona"){
                cout<<"Enter the goal score of Barcelona : ";
                cin>>goalMadeByBarcelona;
            } 

            else if(teamName == "Malaga"){
                cout<<"Enter the goal score of Malaga : ";
                cin>>goalMadeByMalaga;
            } 

            else if(teamName == "RealMadrid"){
                cout<<"Enter the goal score of Real Madrid : ";
                cin>>goalMadeByRealMadrid;
            }

            else{
                cout<<"Enter the goal score of Eibar : ";
                cin>>goalMadeByEibar;
            }
        }
        if(goalMadeByRealMadrid >= goalMadeByMalaga) cout<<"Real Madrid win the title"<<endl;

        else{
            if(goalMadeByBarcelona > goalMadeByEibar) cout<<"Barcelona win the title"<<endl;
            else cout<<"Real Madrid win the title"<<endl;
        }
    }
}