// Given the schedule of Chef for 30 days (A binary string of length 30 where '0' denotes that Chef was on leave and '1' denotes Chef was working on that day). Chef gets X Rs for every day he worked. As working continuously for a long time is hectic so Company introduced the following policy to give a bonus to its employees. The company will check the longest streak for which an employee has worked and will award Y Rs for every day of that streak as a bonus. Calculate the salary received by Chef (including the bonus).




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int x,y;

        // cout<<"Enter the rupees Chef get : ";
        cin>>x;

        // cout<<"Enter the bonus rupees : ";
        cin>>y;
        
        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        
        int count1 = 0,longestCount = 0,countStreak = 0;
        for(int i = 0;i < 30;i++){
            if(str[i] == '1'){
                count1++;
                countStreak++;
            }
            else{
                longestCount = max(longestCount,countStreak);
                countStreak = 0;
            }
            longestCount = max(longestCount,countStreak);
        }
        
        cout<<((count1 * x) + (longestCount * y))<<endl;
    }
}