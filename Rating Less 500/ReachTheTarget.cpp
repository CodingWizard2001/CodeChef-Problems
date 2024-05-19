// There is a cricket match going on between two teams A and B. Team B is batting second and got a target of X runs. Currently, team B has scored Y runs. Determine how many more runs Team B should score to win the match.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int totalRun,runMadeByTeamB;
        cout<<"Enter the total run scored by opponent team : ";
        cin>>totalRun;
        cout<<"Enter the current run scored by team B : ";
        cin>>runMadeByTeamB;
        cout<<"Runs that are need for Team B should score to win the match : "<<(totalRun - runMadeByTeamB)<<endl;
    }
}