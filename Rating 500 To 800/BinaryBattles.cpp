// In one round, each team will be paired up with and compete against one of the other teams. If there are X teams before the start of a round, x / 2 matches are held simultaneously during the round between x / 2 pairs of teams. The winning team of each match will move on to the next round, while the losing team of each match will be eliminated. There are no ties involved. The next round will then take place in the same format between the remaining teams. The process will continue until only one team remains, which will be declared the overall winner. The organizers want to find the total time the event will take to complete. It is given that each round spans A minutes, and that there is a break of B minutes between every two rounds (no break after the last round). Can you help the organizers determine how long the event will take to finish?


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfTeam,codingTime,breakTime;
        cout<<"Enter the no. of team participate : ";
        cin>>noOfTeam;
        cout<<"Enter the duration of coding time : ";
        cin>>codingTime;
        cout<<"Enter the duration of break time : ";
        cin>>breakTime;
        int ans = 0;
        while(noOfTeam > 1){
            ans += codingTime;
            noOfTeam /= 2;
            if(noOfTeam != 1) ans += breakTime;
        }
        cout<<"The event will take : "<<ans<<" minutes"<<endl;
    }
}