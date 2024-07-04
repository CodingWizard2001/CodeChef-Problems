// It's IPL time and as usual RCB are finding it tough to qualify for playoffs. RCB needs a minimum of X more points to qualify for playoffs in their remaining Y matches. A win, tie and loss in a match will yield 2,1,0 points respectively to a team. You being a true RCB supporter want to find the minimum number of matches RCB needs to win to qualify for playoffs. It is guaranteed that RCB will qualify for playoffs if they win all their remaining Y matches.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int pointNeed,noOfMatches;

        // cout<<"Enter the points needed to qualify : ";
        cin>>pointNeed;

        // cout<<"Enter the no. of matches are remaining : ";
        cin>>noOfMatches;
        
        int ans = 0;
        if(pointNeed <= noOfMatches) cout<<0<<endl;
        else cout<<(pointNeed - noOfMatches)<<endl;
    }
}