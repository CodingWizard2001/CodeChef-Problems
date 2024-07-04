// Chef has recently got a broadband internet connection. His history of internet data usage is provided as below. During the first T1 minutes, the internet data used was D1 MBs per minute, and during the next T2 minutes, it was D2 MBs per minute, and so on till during last TN minutes it was DN MBs per minute. The internet provider charges the Chef 1 dollar for every 1 MB data used, except for the first K minutes, when the internet data is free as part of the plan provided to Chef. Please find out the total amount that Chef has to pay the internet provider (in dollars).



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfCases,freeMinutes;

        // cout<<"Enter the no. of cases : ";
        cin>>noOfCases;

        // cout<<"Enter the value of free minutes : ";
        cin>>freeMinutes;

        int billToBePay = 0;
        while(noOfCases--){
            int minuteUsed,cost;

            // cout<<"Total minutes used : ";
            cin>>minuteUsed;

            // cout<<"Cost per minute : ";
            cin>>cost;

            if(freeMinutes >= minuteUsed) freeMinutes -= minuteUsed;
            else{
                billToBePay += (minuteUsed - freeMinutes) * cost;
                freeMinutes = 0;
            }
        }
        cout<<billToBePay<<endl;
    }
}