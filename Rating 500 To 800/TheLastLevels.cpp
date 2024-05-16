// Chef is playing a video game, and is getting close to the end. He decides to finish the rest of the game in a single session. There are X levels remaining in the game, and each level takes Chef Y minutes to complete. To protect against eye strain, Chef also decides that every time he completes 3 levels, he will take a Z minute break from playing. Note that there is no need to take this break if the game has been completed. How much time (in minutes) will it take Chef to complete the game?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int totalLevels,minutesToComplete,breakTime;
        cout<<"Enter total levels in a game : ";
        cin>>totalLevels;
        cout<<"Enter total minutes to complete : ";
        cin>>minutesToComplete;
        cout<<"Enter break time : ";
        cin>>breakTime;
        if(totalLevels <= 3) cout<<"Total time required : "<<(totalLevels * minutesToComplete)<<endl;
        else if(totalLevels % 3 != 0) cout<<"Total time required : "<<(totalLevels * minutesToComplete) + ((totalLevels / 3) * breakTime)<<endl;
        else cout<<"Total time required : "<<(totalLevels * minutesToComplete) + (((totalLevels / 3) * breakTime) - breakTime)<<endl;
    }
}