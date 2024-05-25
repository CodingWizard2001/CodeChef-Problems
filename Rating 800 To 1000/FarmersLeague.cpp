// A football league of N teams is taking place, where each team plays other teams once in single round robin fashion. A team gets 3 points for winning a game and 0 for losing (assume that no games end in a draw/tie). What is the maximum possible difference of points between the winning team and the second-placed team?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfTeams;
        cout<<"Enter the no. of teams are playing : ";
        cin>>noOfTeams;
        cout<<"The maximum possible difference of points will be : "<<(noOfTeams / 2) * 3<<endl;
    }
}