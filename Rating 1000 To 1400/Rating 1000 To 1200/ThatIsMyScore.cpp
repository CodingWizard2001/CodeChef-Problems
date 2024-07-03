// You are participating in a contest which has 11 problems (numbered 1 through 11). The first eight problems (i.e. problems 1,2,…,8) are scorable, while the last three problems (9, 10 and 11) are non-scorable ― this means that any submissions you make on any of these problems do not affect your total score. Your total score is the sum of your best scores for all scorable problems. That is, for each scorable problem, you look at the scores of all submissions you made on that problem and take the maximum of these scores (or 0 if you didn't make any submissions on that problem); the total score is the sum of the maximum scores you took. You know the results of all submissions you made. Calculate your total score.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the array : ";
        cin>>len;
        int arr[len],brr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the problem number: ";
            cin>>arr[i];
            // cout<<"Enter the score of problem : ";
            cin>>brr[i];
        }

        vector<int>score(12);
        for(int i = 0;i < len;i++){
            score[arr[i]] = max(score[arr[i]],brr[i]);
        }

        int ans = 0;
        for(int i = 1;i <= 8;i++){
            ans += score[i];
        }

        // cout<<"Total score will be : ";
        cout<<ans<<endl;
    }
}