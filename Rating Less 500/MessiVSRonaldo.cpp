// In Chefland, a football player gets 2 points for each goal and 1 point for each assist. Messi has A goals and B assists this season, whereas Ronaldo has X goals and Y assists. Find out the player with more points this season.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int goalByMessi,assistByMessi,goalByRonaldo,assistByRonaldo;
        cout<<"Enter the goal score by Messi : ";
        cin>>goalByMessi;
        cout<<"Enter the assist done by Messi : ";
        cin>>assistByMessi;
        cout<<"Enter the goal score by Ronaldo : ";
        cin>>goalByRonaldo;
        cout<<"Enter the goal assist done by Ronaldo : ";
        cin>>assistByRonaldo;
        int pointsGainByMessi = (goalByMessi * 2) + assistByMessi;
        int pointsGainByRonaldo = (goalByRonaldo * 2) + assistByRonaldo;
        if(pointsGainByMessi == pointsGainByRonaldo) cout<<"Both Ronaldo & Messi gain same point"<<endl;
        else if(pointsGainByMessi > pointsGainByRonaldo) cout<<"Messi gain more point"<<endl;
        else cout<<"Ronaldo gain more point"<<endl;
    }
}