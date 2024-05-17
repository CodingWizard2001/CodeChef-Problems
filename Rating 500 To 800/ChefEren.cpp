// Chef is a very big fan of Eren Yeager. In the last season of Attack on Titan, there were N episodes numbered from 1 to N. Each even indexed episode was A minutes long and each odd indexed episode was B minutes long. Calculate the total duration (in minutes) of the last season.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int totalEpisode,oddIndexDuration,evenIndexDuration;
        cout<<"Enter total no. of episode : ";
        cin>>totalEpisode;
        cout<<"Enter duration of odd indexed episode : ";
        cin>>oddIndexDuration;
        cout<<"Enter duration of even indexed episode : ";
        cin>>evenIndexDuration;
        cout<<"Total duration : "<<((totalEpisode / 2) * evenIndexDuration) + ((totalEpisode - (totalEpisode / 2)) * oddIndexDuration)<<endl;
    }
}