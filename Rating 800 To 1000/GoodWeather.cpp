// The weather report of Chefland is Good if the number of sunny days in a week is strictly greater than the number of rainy days. Given 7 integers A1,A2,A3,A4,A5,A 6,A7 where Ai = 1 denotes that the ith day of week in Chefland is a sunny day, Ai = 0 denotes that the ith day in Chefland is a rainy day. Determine if the weather report of Chefland is Good or not.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int day1,day2,day3,day4,day5,day6,day7;
        cout<<"Weather report in first day : ";
        cin>>day1;
        cout<<"Weather report in second day : ";
        cin>>day2;
        cout<<"Weather report in third day : ";
        cin>>day3;
        cout<<"Weather report in fourth day : ";
        cin>>day4;
        cout<<"Weather report in fifth day : ";
        cin>>day5;
        cout<<"Weather report in sixth day : ";
        cin>>day6;
        cout<<"Weather report in seventh day : ";
        cin>>day7;
        if((day1 + day2 + day3 + day4 + day5 + day6 + day7) > 3) cout<<"Weather report is : Good"<<endl;
        else cout<<"Weather report is : Bad"<<endl;

        // 2nd Approach
        // int totalNoDay = 7;
        // int noOfRainyDays = 0,noOfSunnyDays = 0;
        // while(testCase--){
        //     int day;
        //     cin>>day;
        //     if(day == 0) noOfRainyDays++;
        //     else noOfSunnyDays++;
        // }
        // if(noOfSunnyDays > noOfRainyDays) cout<<"Weather report is : Good"<<endl;
        // else cout<<"Weather report is : Bad"<<endl;
    }
}