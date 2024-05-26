// Only x hours are left for the March Long Challenge and Chef is only left with the last problem unsolved. However, he is sure that he cannot solve the problem in the remaining time. From experience, he figures out that he needs exactly H hours to solve the problem. Now Chef finally decides to use his special power which he has gained through years of intense yoga. He can travel back in time when he concentrates. Specifically, his power allows him to travel to N different time zones, which are T1,T2,…,TN hours respectively behind his current time. Find out whether Chef can use one of the available time zones to solve the problem and submit it before the contest ends.


#include <iostream>
using namespace std;
int main(){
    int noOfTimeZone,totalTimeNeed,noOfHoursLeft;

    cout<<"Enter the no. of time zone : ";
    cin>>noOfTimeZone;

    cout<<"Enter the total time Chef need to solve : ";
    cin>>totalTimeNeed;

    cout<<"Enter the no. of hours left : ";
    cin>>noOfHoursLeft;

    bool flag = false;

    while(noOfTimeZone--){
        int timeZoneValue;

        cout<<"Enter the value of time zone : ";
            cin>>timeZoneValue;

        if((timeZoneValue + noOfHoursLeft) >= totalTimeNeed) flag = true;
    }

    if(flag == true) cout<<"Chef can use one of the available time zones to solve the problem"<<endl;

    else cout<<"Chef can't use one of the available time zones to solve the problem"<<endl;
}