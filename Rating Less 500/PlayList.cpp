// Chef's playlist contains 3 songs named A,B, and C, each of duration exactly X minutes. Chef generally plays these 3 songs in loop, i.e, A → B → C → A → B → C → A →…

// Chef went on a train journey of N minutes and played his playlist on loop for the whole journey. How many times did he listen to the song C completely?

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int trainJourneyOfTime,durationOfEachSong;
        cout<<"Enter the time of train journey : ";
        cin>>trainJourneyOfTime;
        cout<<"Enter the duration of each song : ";
        cin>>durationOfEachSong;
        cout<<"The no. of time he listen to the song C completely will be : "<<(trainJourneyOfTime / (durationOfEachSong * 3))<<endl;
    }
}