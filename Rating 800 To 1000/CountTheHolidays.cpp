// A particular month has 30 days, numbered from 1 to 30. Day 1 is a Monday, and the usual 7-day week is followed (so day 2 is Tuesday, day 3 is Wednesday, and so on). Every Saturday and Sunday is a holiday. There are N festival days, which are also holidays. Note that it is possible for a festival day to occur on a Saturday or Sunday. You are given the dates of the festivals. Determine the total number of holidays in this month.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfFestivalDays;
        cout<<"Enter the total no. of festival days : ";
        cin>>noOfFestivalDays;
        int count = 0;
        while(noOfFestivalDays--){
            int dayNo;
            cout<<"Enter the date of festival : ";
            cin>>dayNo;
            // As Monday starts -> 1 so first saturday will come at 6 and sunday came at 7
            // now Total no. of Saturday will come at -> 6,13,20,27.
            // now Total no. of Sunday will come at -> 7,14,21,28.
            // Total holiday = 8
            if(dayNo == 6 || dayNo == 7 || dayNo == 13 || dayNo == 14 || dayNo == 20 || dayNo == 21 || dayNo == 27 || dayNo == 28) continue;
            else count++;
        }
        cout<<"Total no. of holidays : "<<count<<endl;
    }
}