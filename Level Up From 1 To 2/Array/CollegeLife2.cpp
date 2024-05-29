// Chef has just started watching Game of Thrones, and he wants to first calculate the exact time (in minutes) that it'll take him to complete the series. The series has S seasons, and the ith season has Ei episodes, each of which are Li,1,Li,2,…,LiE  minutes long. Note that these Li,j include the duration of the beginning intro song in each episode. The streaming service that he uses, allows Chef to skip the intro song. The intro song changes slightly each season, and so he wants to watch the intro song in the first episode of each season, but he'll skip it in all other episodes of that season (yes, we know, a sacrilege!). You know that the intro song lasts for Qi minutes in the ith season. Find the total time in minutes, that he has to watch.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long noOfSeason,timeNeed = 0,temp,noOfEpisode;
        cout<<"Enter the no. of season : ";
        cin>>noOfSeason;

        vector<long long>introSong;

        for(int i = 0;i < noOfSeason;i++){
            cout<<"Enter the duration of intro song : ";
            cin>>temp;
            timeNeed += temp;
            introSong.push_back(temp);
        }

        for(int i = 0;i < noOfSeason;i++){
            cout<<"Enter the no. of episode : ";
            cin>>noOfEpisode;
            while(noOfEpisode--){
                cout<<"Enter the duration of episode : ";
                cin>>temp;
                timeNeed += temp - introSong[i];
            }
        }

        cout<<"The total time that he has to watch will be : "<<timeNeed<<endl;
    }
}