// In the bustling CodeChef office, the entrance is equipped with a high-tech card swipe system. Each employee is assigned a unique ID card that they use to swipe in and out of the building. The system records every swipe, capturing the first swipe of an ID as in, second as out, third as in, and so on. Given an array A consisting of N IDs denoting N swipes throughout the day, find the maximum number of people in the office at any time.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;
        
        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        unordered_map<int,int>mp;
        
        int ans = 0,maxi = 0;
        for(int i = 0;i < len;i++){
            if(mp[arr[i]] == 0){
                mp[arr[i]]++;
                ans++;
            }
            else{
                mp[arr[i]]--;
                ans--;
            }
            maxi = max(maxi,ans);
        }
        cout<<maxi<<endl;
    }
}