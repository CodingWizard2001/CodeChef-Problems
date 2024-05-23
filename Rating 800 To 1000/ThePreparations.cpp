// Chef has an exam which will start exactly M minutes from now. However, instead of preparing for his exam, Chef started watching Season-1 of Superchef. Season - 1 has N episodes, and the duration of each episode is K minutes. Will Chef be able to finish watching Season-1 strictly before the exam starts?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int examTime,noOfEpisodes,timeTakeByEachEpisode;
        cout<<"Enter the exam time of Chef : ";
        cin>>examTime;
        cout<<"Enter the no. of episodes : ";
        cin>>noOfEpisodes;
        cout<<"Enter the time taken by each episode : ";
        cin>>timeTakeByEachEpisode;
        if((timeTakeByEachEpisode * noOfEpisodes) < examTime) cout<<"Chef will be able to finish watching Season-1 strictly"<<endl;
        else cout<<"Chef will be unable to finish watching Season-1 strictly"<<endl;
    }
}